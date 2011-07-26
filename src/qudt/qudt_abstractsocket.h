#ifndef QUDT_ABSTRACTSOCKET_H
#define QUDT_ABSTRACTSOCKET_H

#include <QIODevice>

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class AbstractSocketPrivate;
class AbstractSocket : public QIODevice
{
	Q_OBJECT
public:
	enum SocketType
	{
		TcpSocket,
		UdpSocket,

		UnknownSocketType = -1
	};
	enum NetworkLayerProtocol {
		IPv4Protocol,
		IPv6Protocol,

		UnknownNetworkLayerProtocol = -1
	};
	enum SocketError {
		ConnectionRefusedError,
		RemoteHostClosedError,
		HostNotFoundError,
		SocketAccessError,
		SocketResourceError,
		SocketTimeoutError,
		DatagramTooLargeError,
		NetworkError,
		AddressInUseError,
		SocketAddressNotAvailableError,
		UnsupportedSocketOperationError,
		UnfinishedSocketOperationError,
		ProxyAuthenticationRequiredError,
		SslHandshakeFailedError,
		ProxyConnectionRefusedError,
		ProxyConnectionClosedError,
		ProxyConnectionTimeoutError,
		ProxyNotFoundError,
		ProxyProtocolError,

		UnknownSocketError = -1
	};
	enum SocketState {
		UnconnectedState,
		HostLookupState,
		ConnectingState,
		ConnectedState,
		BoundState,
		ListeningState,
		ClosingState
#ifdef QT3_SUPPORT
		,
		Idle = UnconnectedState,
		HostLookup = HostLookupState,
		Connecting = ConnectingState,
		Connected = ConnectedState,
		Closing = ClosingState,
		Connection = ConnectedState
#endif
	};
public:
	AbstractSocket(SocketType socketType, QObject *parent);
	virtual ~AbstractSocket();

public:
	void connectToHost(const QString &hostName, quint16 port, OpenMode mode = ReadWrite);
	void connectToHost(const QHostAddress &address, quint16 port, OpenMode mode = ReadWrite);
	void disconnectFromHost();

//public:
//	void abort();
//	SocketError error();

protected:
	AbstractSocket(SocketType socketType, AbstractSocketPrivate &dd, QObject *parent);

private:
	Q_DISABLE_COPY(AbstractSocket)
	Q_DECLARE_PRIVATE(AbstractSocket)
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_ABSTRACTSOCKET_H
