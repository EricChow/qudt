#ifndef QUDT_TCPSOCKET_P_H
#define QUDT_TCPSOCKET_P_H

#include "qudt_abstractsocket_p.h"
#include "qudt_tcpsocket.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class TcpSocketPrivate : public AbstractSocketPrivate
{
	Q_DECLARE_PUBLIC(TcpSocket)
public:
	TcpSocketPrivate();
	virtual ~TcpSocketPrivate();
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_TCPSOCKET_P_H
