#ifndef QUDT_ABSTRACTSOCKET_P_H
#define QUDT_ABSTRACTSOCKET_P_H

#include "qudt_abstractsocket.h"
#include <QtCore/private/qiodevice_p.h>

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

class AbstractSocketPrivate : public QIODevicePrivate
{
	Q_DECLARE_PUBLIC(AbstractSocket)
public:
	AbstractSocketPrivate();
	virtual ~AbstractSocketPrivate();
};

// NAMESPACE_END(QUDT)
}

#endif//QUDT_ABSTRACTSOCKET_P_H
