#include "qudt_udpsocket.h"

#include "qudt_udpsocket_p.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

UdpSocket::UdpSocket(QObject *parent)
	: AbstractSocket(AbstractSocket::UdpSocket, *new UdpSocketPrivate, parent)
{
}

UdpSocket::~UdpSocket()
{
}

// NAMESPACE_END(QUDT)
}
