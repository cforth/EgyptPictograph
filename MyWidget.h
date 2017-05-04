#pragma once

#include <QWidget>
#include "ui_MyWidget.h"
#include <string>
#include <map>

class MyWidget : public QWidget
{
	Q_OBJECT

public:
	MyWidget(QWidget *parent = Q_NULLPTR);
	~MyWidget();

	void paintEvent(QPaintEvent *event);
	void drawEgyptChars(std::string str);

private:
	Ui::MyWidget ui;
	std::map<char, std::string> charsMap;
	std::string myStr;
};
