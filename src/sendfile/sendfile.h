#ifndef SENDFILE_H
#define SENDFILE_H

#include <QtGui/QWidget>
#include "ui_sendfile.h"

class sendfile : public QWidget
{
	Q_OBJECT

public:
	sendfile(QWidget *parent = 0, Qt::WFlags flags = 0);
	~sendfile();

private:
	Ui::sendfileClass ui;
};

#endif // SENDFILE_H
