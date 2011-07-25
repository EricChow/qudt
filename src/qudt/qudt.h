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

#include "qudt_initializer.h"

#endif//QUDT_H
