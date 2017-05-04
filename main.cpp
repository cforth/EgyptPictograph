#include "EgyptPictograph.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	EgyptPictograph w;
	w.show();
	return a.exec();
}
