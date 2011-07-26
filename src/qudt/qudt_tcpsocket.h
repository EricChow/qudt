#ifndef QUDT_TCPSOCKET_H
#define QUDT_TCPSOCKET_H

#include "qudt_global.h"
#include "qudt_abstractsocket.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class TcpSocketPrivate;
class QUDT_EXPORT TcpSocket : public AbstractSocket
{
	Q_OBJECT
public:
	explicit TcpSocket(QObject *parent = 0);
	virtual ~TcpSocket();
private:
	Q_DISABLE_COPY(TcpSocket)
	Q_DECLARE_PRIVATE(TcpSocket)
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_TCPSOCKET_H
