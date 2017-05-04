#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EgyptPictograph.h"

class EgyptPictograph : public QMainWindow
{
	Q_OBJECT

public:
	EgyptPictograph(QWidget *parent = Q_NULLPTR);

private slots:
	int OnGenerate();

private:
	Ui::EgyptPictographClass ui;
};
