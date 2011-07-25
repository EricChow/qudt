#ifndef RECVFILE_H
#define RECVFILE_H

#include <QtGui/QWidget>
#include "ui_recvfile.h"

class recvfile : public QWidget
{
	Q_OBJECT

public:
	recvfile(QWidget *parent = 0, Qt::WFlags flags = 0);
	~recvfile();

private:
	Ui::recvfileClass ui;
};

#endif // RECVFILE_H
