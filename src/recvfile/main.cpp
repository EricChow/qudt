#include "recvfile.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	recvfile w;
	w.show();
	return a.exec();
}
