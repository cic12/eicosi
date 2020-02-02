#pragma once

#include <QThread>
#include <QtCore>
#include <QFile>
#include <QStringList>
#include <QVector>
#include <thread>
#include <time.h>
#include <math.h>

#include "ui_GUI.h"
#include "motorThread.h"
#include "fis.h"
#include "daq.h"
#include "mpc.h"
#include "tmsicontroller.h"

#define NX    	4
#define NU  	1
#define NH      4

using namespace std;

struct testParams {
	bool Sim = 1, aiSim = 1, tauEst = 1, Mode = 1;
	int Device = 0; // 0 - None, 1 - HEBI
	int Human = 1; // 0 - None, 1 - Chris, 2 - Huo, 3 - Filip, 4 - Shibo, 5 - Annika
	double T = 4.0;
	double freq = 0.25;
	char* emgPath = "../res/emgTorque/20200124_TMSi_EMG/emgFA.csv";
}; extern testParams test0;

struct mpcParams {
	double rwsReferenceIntegration[2 * NX];
	const double x0[NX] = { 0, 0, 0, 1 };
	double xdes[NX] = { 0, 0, 0, 0 };
	const double u0[NU] = { 0.0 }, udes[NU] = { 0.0 }, umin[NU] = { -20.0 }, umax[NU] = { 20.0 }; // set in inequality constraints
	const double Tsim = test0.T, dt = 0.002;
	//const int AIsamplingRate = 10000;
	double Thor = 0.2;
	const char *IntegralCost = "on", *TerminalCost = "off", *ScaleProblem = "on";
	const double AugLagUpdateGradientRelTol = (typeRNum)1e0;
	const double ConstraintsAbsTol[NH] = { 1e-3, 1e-3, 1e-3, 1e-3 };
}; extern mpcParams mpc0;

struct modelParams {
	double J_h[6] = { 0, 0.2383, 0, 0, 0, 0 };
	double B_h[6] = { 0, 0.1676, 0, 0, 0, 0 };
	double A_h[6] = { 0, 0, 0, 0, 0, 0 };
	double tau_g_h[6] = { 0, 9.4162, 0, 0, 0, 0 };
	
	double J = 0.0377 + J_h[test0.Human];
	double B = 0.0207 + B_h[test0.Human];
	double A = 0.0000 + A_h[test0.Human];
	double tau_g = 1.7536 + tau_g_h[test0.Human];
			
	//double w_theta = 2000, w_tau = 20;
	double w_theta = 100000, w_tau = 20; // Human

	double x1min = 0.1, x1max = 1.3, x2min = -50, x2max = 50, umin = -20, umax = 20;
	double pSys[12] = { A , B , J , tau_g , w_theta, w_tau, x1min, x1max, x2min, x2max, umin, umax };
}; extern modelParams model0;

struct plotVars {
	double time = 0,
		x1 = 0, x1des = 0, x2 = 0,
		u = 0, hTauEst = 0, mode = 1,
		AIdata0 = 0, AIm0 = 0, AIdata1 = 0, AIm1 = 0,
		lambdaA = 0, lambdaR = 0;
};
	
class MPCThread : public QThread
{
	Q_OBJECT

public:
	MPCThread(QObject *parent);

	void run();
	bool Stop = false;
	int iMPC = 0;

	plotVars vars0;
	
	QMutex mutex;

	void paramSet(double* params);
	void aiSimProcess(char emg_string[]);
	void mpc_init();
	void mpc_loop();
	void mpc_stop();
	void controlFunctions(fisParams);
	void plantSim();
	void print2Files();
private:
	int i, vec_i;
	double currentVelocity = 0, previousVelocity = 0, currentAcceleration = 0, alpha = 0.001, xdes_previous = 0.2, xdes1_previous = 0.0;
	double t = 0.0, t_halt = 0.0;
	double task_count = 0, time_counter = 1;
	clock_t this_time, last_time, start_time, end_time;
	QVector<double> aivec = { 0 }, aivec1 = { 0 }, AImvec = { 0 }, AImvec1 = { 0 };
	typeGRAMPC *grampc_;
	TaskHandle  AItaskHandle = 0, AOtaskHandle = 0;

	MotorThread *motorThread;
	TMSiController *TMSi;
	FIS *fuzzyInferenceSystem;

	char* emgPath = test0.emgPath;
	double freq = test0.freq;
	double aiVec[4];
	
	FILE *file_x, *file_xdes, *file_u, *file_t, *file_mode, *file_Ncfct, *file_mu, *file_rule, *file_ai;
signals:
	void mpcIteration(plotVars);
	void GUIPrint(QString);
};