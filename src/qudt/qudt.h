#ifndef QUDT_H
#define QUDT_H

#include "qudt_global.h"

#include <QObject>
class QUDT_EXPORT QUDTSocket : public QObject
{
public:
	QUDTSocket();
	~QUDTSocket();
};

#endif//QUDT_H
