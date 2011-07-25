#include "sendfile.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	sendfile w;
	w.show();
	return a.exec();
}
