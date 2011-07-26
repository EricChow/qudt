#ifndef QUDT_UDPSOCKET_H
#define QUDT_UDPSOCKET_H

#include "qudt_global.h"
#include "qudt_abstractsocket.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class UdpSocketPrivate;
class QUDT_EXPORT UdpSocket : public AbstractSocket
{
	Q_OBJECT
public:
	explicit UdpSocket(QObject *parent = 0);
	virtual ~UdpSocket();
private:
	Q_DISABLE_COPY(UdpSocket)
	Q_DECLARE_PRIVATE(UdpSocket)
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_UDPSOCKET_H
