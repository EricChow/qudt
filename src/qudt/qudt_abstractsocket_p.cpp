#include "qudt_abstractsocket_p.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

AbstractSocketPrivate::AbstractSocketPrivate()
	: QIODevicePrivate()
	, m_udtSocket(UDT::INVALID_SOCK)
	, m_socketType(AbstractSocket::UnknownSocketType)
	, m_networkLayoutProtocol(AbstractSocket::UnknownNetworkLayerProtocol)
{
}

AbstractSocketPrivate::~AbstractSocketPrivate()
{
}

// NAMESPACE_END(QUDT)
}