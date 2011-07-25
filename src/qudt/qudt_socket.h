#ifndef QUDT_SOCKET_H
#define QUDT_SOCKET_H

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

#include <QIODevice>
class Socket : public QIODevice
{
	Q_OBJECT
public:
	Socket(QObject *parent = 0);
	~Socket();
};

// NAMESPACE_END(QUDT);
}

#endif//QUDT_SOCKET_H
