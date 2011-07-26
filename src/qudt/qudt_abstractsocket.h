#ifndef QUDT_ABSTRACTSOCKET_H
#define QUDT_ABSTRACTSOCKET_H

#include <QIODevice>

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class AbstractSocketPrivate;
class AbstractSocket : public QIODevice
{
	Q_OBJECT
public:
	enum SocketType
	{
		TcpSocket,
		UdpSocket,
		UnknownSocketType = -1
	};
public:
	AbstractSocket(SocketType socketType, QObject *parent);
	virtual ~AbstractSocket();

protected:
	AbstractSocket(SocketType socketType, AbstractSocketPrivate &dd, QObject *parent);

private:
	Q_DISABLE_COPY(AbstractSocket)
	Q_DECLARE_PRIVATE(AbstractSocket)
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_ABSTRACTSOCKET_H
