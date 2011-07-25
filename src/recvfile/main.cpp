#include "recvfile.h"
#include <QtGui/QApplication>

#include "./../qudt/qudt.h"

int main(int argc, char *argv[])
{
	QUDT::Initializer init;

	QApplication a(argc, argv);
	recvfile w;
	w.show();
	return a.exec();
}
