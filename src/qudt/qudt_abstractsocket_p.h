#ifndef QUDT_ABSTRACTSOCKET_P_H
#define QUDT_ABSTRACTSOCKET_P_H

#include "qudt_abstractsocket.h"
#include <QtCore/private/qiodevice_p.h>

#include "udt.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class AbstractSocketPrivate : public QIODevicePrivate
{
	Q_DECLARE_PUBLIC(AbstractSocket)
public:
	AbstractSocketPrivate();
	virtual ~AbstractSocketPrivate();

public:
	UDTSOCKET m_udtSocket;
	AbstractSocket::SocketType m_socketType;
	AbstractSocket::NetworkLayerProtocol m_networkLayoutProtocol;

public:
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_ABSTRACTSOCKET_P_H
