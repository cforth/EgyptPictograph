#include "EgyptPictograph.h"

EgyptPictograph::EgyptPictograph(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(OnGenerate()));
}

int EgyptPictograph::OnGenerate()
{
	ui.widget->drawEgyptChars(ui.lineEdit->text().toStdString());
	return 0;
}