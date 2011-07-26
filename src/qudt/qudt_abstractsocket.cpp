#include "qudt_abstractsocket.h"

#include "qudt_abstractsocket_p.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

AbstractSocket::AbstractSocket(SocketType socketType, QObject *parent)
	: QIODevice(*new AbstractSocketPrivate, parent)
{
	Q_D(AbstractSocket);

	d->m_socketType = socketType;
}

AbstractSocket::~AbstractSocket()
{
}

AbstractSocket::AbstractSocket(SocketType socketType, AbstractSocketPrivate &dd, QObject *parent)
	: QIODevice(dd, parent)
{
	Q_D(AbstractSocket);

	d->m_socketType = socketType;
}

void AbstractSocket::connectToHost(const QString &hostName, quint16 port, OpenMode mode)
{
	;
}

void AbstractSocket::connectToHost(const QHostAddress &address, quint16 port, OpenMode mode)
{
	connectToHost(address.toString(), port, mode);
}

void AbstractSocket::disconnectFromHost()
{
	;
}

// NAMESPACE_END(QUDT)
}
