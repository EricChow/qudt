#include "qudt_socket.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

Socket::Socket(QObject *parent)
	: QIODevice(parent)
{
}

Socket::~Socket()
{
}

// NAMESPACE_END(QUDT)
}