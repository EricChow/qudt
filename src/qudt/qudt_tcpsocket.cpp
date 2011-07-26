#include "qudt_tcpsocket.h"

#include "qudt_tcpsocket_p.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

TcpSocket::TcpSocket(QObject *parent)
	: AbstractSocket(AbstractSocket::TcpSocket, *new TcpSocketPrivate, parent)
{
}

TcpSocket::~TcpSocket()
{
}

// NAMESPACE_END(QUDT)
}
