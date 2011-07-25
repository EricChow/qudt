#include "qudt_abstractsocket.h"

#include "qudt_abstractsocket_p.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

AbstractSocket::AbstractSocket(SocketType socketType, QObject *parent)
	: QIODevice(*new AbstractSocketPrivate, parent)
{
}

AbstractSocket::~AbstractSocket()
{
}

// NAMESPACE_END(QUDT)
}
