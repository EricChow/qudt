#ifndef QUDT_UDPSOCKET_P_H
#define QUDT_UDPSOCKET_P_H

#include "qudt_abstractsocket_p.h"
#include "qudt_udpsocket.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class UdpSocketPrivate : public AbstractSocketPrivate
{
	Q_DECLARE_PUBLIC(UdpSocket)
public:
	UdpSocketPrivate();
	virtual ~UdpSocketPrivate();
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_UDPSOCKET_P_H
