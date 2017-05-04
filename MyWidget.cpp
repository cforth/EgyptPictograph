#include "MyWidget.h"
#include <QPainter>
#include <map>
#include <string>
#include <QDebug>
using std::string;
using std::map;

MyWidget::MyWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	for (int x = 0; x < 26; ++x)
	{
		string imagePath = "";
		imagePath += ":EgyptChars/Resources/";
		imagePath += 'a' + x;
		imagePath += ".JPG";
		charsMap['a' + x] = imagePath;
		charsMap['A' + x] = imagePath;
	}

	charsMap[' '] = ":EgyptChars/Resources/backspace.JPG";
}

MyWidget::~MyWidget()
{
}

void MyWidget::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	QPixmap image;
	int imageSize = 40;
	int width = this->width() - this->width()%40;
	for (int x = 0; x < myStr.length(); ++x)
	{
		char myChar = myStr[x];
		if (!(myChar >= 'a' && myChar <= 'z' || myChar >= 'A' && myChar <= 'Z'))
		{
			myChar = ' ';
		}
		image.load(charsMap[myChar].c_str());
		int row = imageSize*x / width;
		int column = imageSize*x % width;
		qDebug() << row << " " << column;
		painter.drawPixmap(column, imageSize*row, imageSize, imageSize, image);
	}
}

void MyWidget::drawEgyptChars(string str)
{
	this->myStr = str;
	update();
}
