#include "GUI.h"

GUI::GUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initPlots();

	mpcThread = new MPCThread(this);
	timer = new QTimer(this);
	timer->setTimerType(Qt::PreciseTimer);

	connect(timer, &QTimer::timeout, this, QOverload<>::of(&GUI::onTimeout)); // GUI update
	connect(mpcThread, SIGNAL(GUIPrint(QString)), this, SLOT(onGUIPrint(QString))); // GUI print function

	ui.A_box->setValue(mpcThread->model.A);
	ui.B_box->setValue(mpcThread->model.B);
	ui.J_box->setValue(mpcThread->model.J);
	ui.tau_g_box->setValue(mpcThread->model.tau_g);
	ui.W_theta_box->setValue(mpcThread->model.w_theta);
	ui.W_tau_box->setValue(mpcThread->model.w_tau);
	ui.Thor_box->setValue(mpcThread->mpc.Thor);
	ui.Freq_box->setValue(mpcThread->test.freq);
}

void GUI::onTimeout()
{
	mpcThread->mutex.lock();
	if (mpcThread->mpc_initialised) {
		plot_vars = mpcThread->vars;
		if (mpcThread->Stop) {
			timer->stop();
		}
	}
	mpcThread->mutex.unlock();
	ui.label_3->setText(QString::number(plot_vars.time, 'f', 3));
	addPoints(plot_vars);
	plot();
}

void GUI::on_btn_start_clicked()
{
	mpcThread->start(QThread::NormalPriority);
	clearPlots();
	timer->start(20); // Timer period in ms controls GUI update frequency
	mpc_reset = false;
}

void GUI::on_btn_stop_clicked()
{
	mpcThread->Stop = true;
}

void GUI::on_btn_reset_clicked()
{
	if (!mpc_reset) {
		ui.plainTextEdit->insertPlainText("MPC Reset \n\n");
		mpcThread = new MPCThread(this);
		connect(mpcThread, SIGNAL(GUIPrint(QString)), this, SLOT(onGUIPrint(QString))); // GUI print function
		mpc_reset = true;
	}
}

void GUI::on_btn_set_params_clicked()
{
	double params[8] = { ui.A_box->value(),
		ui.B_box->value(),
		ui.J_box->value(),
		ui.tau_g_box->value(),
		ui.W_theta_box->value(),
		ui.W_tau_box->value(),
		ui.Thor_box->value(),
		ui.Freq_box->value()};
	mpcThread->paramSet(params);
}

void GUI::onGUIPrint(QString message)
{
	ui.plainTextEdit->insertPlainText(message);
}

void GUI::initPlots()
{
	QFont font; // include this to fully disable antialiasing for higher performance
	font.setStyleStrategy(QFont::NoAntialias);

	ui.plot->setNotAntialiasedElements(QCP::aeAll);
	ui.plot->xAxis->setTickLabelFont(font);
	ui.plot->yAxis->setTickLabelFont(font);
	ui.plot->legend->setFont(font);

	ui.plot1->setNotAntialiasedElements(QCP::aeAll);
	ui.plot1->xAxis->setTickLabelFont(font);
	ui.plot1->yAxis->setTickLabelFont(font);
	ui.plot1->legend->setFont(font);

	ui.plot2->setNotAntialiasedElements(QCP::aeAll);
	ui.plot2->xAxis->setTickLabelFont(font);
	ui.plot2->yAxis->setTickLabelFont(font);
	ui.plot2->legend->setFont(font);

	ui.plot3->setNotAntialiasedElements(QCP::aeAll);
	ui.plot3->xAxis->setTickLabelFont(font);
	ui.plot3->yAxis->setTickLabelFont(font);
	ui.plot3->legend->setFont(font);

	ui.plot4->setNotAntialiasedElements(QCP::aeAll);
	ui.plot4->xAxis->setTickLabelFont(font);
	ui.plot4->yAxis->setTickLabelFont(font);
	ui.plot4->legend->setFont(font);

	ui.plot5->setNotAntialiasedElements(QCP::aeAll);
	ui.plot5->xAxis->setTickLabelFont(font);
	ui.plot5->yAxis->setTickLabelFont(font);
	ui.plot5->legend->setFont(font);

	// add plots
	ui.plot->addGraph();
	ui.plot->graph(0)->setPen(QPen(Qt::blue));
	ui.plot->addGraph();
	ui.plot->graph(1)->setPen(QPen(Qt::red));

	ui.plot1->addGraph();
	ui.plot1->graph(0)->setPen(QPen(Qt::blue));
	ui.plot1->addGraph();
	ui.plot1->graph(1)->setPen(QPen(Qt::red));
	ui.plot1->addGraph();
	ui.plot1->graph(2)->setPen(QPen(Qt::green));

	ui.plot2->addGraph();
	ui.plot2->graph(0)->setPen(QPen(Qt::blue));

	ui.plot3->addGraph();
	ui.plot3->graph(0)->setPen(QPen(Qt::blue));

	ui.plot4->addGraph();
	ui.plot4->graph(0)->setPen(QPen(Qt::black));

	ui.plot5->addGraph();
	ui.plot5->graph(0)->setPen(QPen(Qt::black));

	// axes settings
	ui.plot->xAxis->setAutoTickStep(false);
	ui.plot->xAxis->setTickStep(1);
	ui.plot->yAxis->setAutoTickStep(false);
	ui.plot->yAxis->setTickStep(0.2);

	ui.plot1->xAxis->setAutoTickStep(false);
	ui.plot1->xAxis->setTickStep(1);
	ui.plot1->yAxis->setAutoTickStep(false);
	ui.plot1->yAxis->setTickStep(10);

	ui.plot2->xAxis->setAutoTickStep(false);
	ui.plot2->xAxis->setTickStep(1);
	ui.plot2->yAxis->setAutoTickStep(false);
	ui.plot2->yAxis->setTickStep(0.05);

	ui.plot3->xAxis->setAutoTickStep(false);
	ui.plot3->xAxis->setTickStep(1);
	ui.plot3->yAxis->setAutoTickStep(false);
	ui.plot3->yAxis->setTickStep(0.05);

	ui.plot4->xAxis->setAutoTickStep(false);
	ui.plot4->xAxis->setTickStep(1);
	ui.plot4->yAxis->setAutoTickStep(false);
	ui.plot4->yAxis->setTickStep(0.5);

	ui.plot5->xAxis->setAutoTickStep(false);
	ui.plot5->xAxis->setTickStep(1);
	ui.plot5->yAxis->setAutoTickStep(false);
	ui.plot5->yAxis->setTickStep(0.5);

	ui.plot->yAxis->setRange(ylim[0], ylim[1]);
	ui.plot1->yAxis->setRange(ylim1[0], ylim1[1]);
	ui.plot2->yAxis->setRange(ylim2[0], ylim2[1]);
	ui.plot3->yAxis->setRange(ylim3[0], ylim3[1]);
	ui.plot4->yAxis->setRange(ylim4[0], ylim4[1]);
	ui.plot5->yAxis->setRange(ylim5[0], ylim5[1]);
}

void GUI::clearPlots()
{
	ui.plot->graph(0)->data()->clear();
	ui.plot->graph(1)->data()->clear();

	ui.plot1->graph(0)->data()->clear();
	ui.plot1->graph(1)->data()->clear();
	ui.plot1->graph(2)->data()->clear();

	ui.plot2->graph(0)->data()->clear();

	ui.plot3->graph(0)->data()->clear();

	ui.plot4->graph(0)->data()->clear();

	ui.plot5->graph(0)->data()->clear();
}

void GUI::addPoints(plotVars vars)
{
	// Add data
	ui.plot->graph(0)->addData(vars.time, vars.x1);
	ui.plot->graph(1)->addData(vars.time, vars.x1des);

	ui.plot1->graph(0)->addData(vars.time, vars.u);
	ui.plot1->graph(1)->addData(vars.time, vars.hTauEst);
	ui.plot1->graph(2)->addData(vars.time, vars.u + vars.hTauEst);

	ui.plot2->graph(0)->addData(vars.time, vars.emg0);

	ui.plot3->graph(0)->addData(vars.time, vars.emg1);

	ui.plot4->graph(0)->addData(vars.time, vars.muA);

	ui.plot5->graph(0)->addData(vars.time, vars.muR);

	// Remove data
	ui.plot->graph(0)->removeDataBefore(vars.time - t_span);
	ui.plot->graph(1)->removeDataBefore(vars.time - t_span);

	ui.plot1->graph(0)->removeDataBefore(vars.time - t_span);
	ui.plot1->graph(1)->removeDataBefore(vars.time - t_span);
	ui.plot1->graph(2)->removeDataBefore(vars.time - t_span);

	ui.plot2->graph(0)->removeDataBefore(vars.time - t_span);

	ui.plot3->graph(0)->removeDataBefore(vars.time - t_span);

	ui.plot4->graph(0)->removeDataBefore(vars.time - t_span);

	ui.plot5->graph(0)->removeDataBefore(vars.time - t_span);

	ui.plot->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
	ui.plot1->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
	ui.plot2->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
	ui.plot3->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
	ui.plot4->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
	ui.plot5->xAxis->setRange(vars.time, t_span, Qt::AlignRight);
}

void GUI::plot()
{
	ui.plot->replot();
	ui.plot1->replot();
	ui.plot2->replot();
	ui.plot3->replot();
	ui.plot4->replot();
	ui.plot5->replot();
}