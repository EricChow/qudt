#include "qudt_initializer.h"

#include "udt.h"

namespace QUDT
{
// NAMESPACE_BEGIN(QUDT)

Initializer::Initializer()
{
	// In the current version, this method always succeed.
	int ret = UDT::startup();
	Q_ASSERT(ret == 0);
}

Initializer::~Initializer()
{
	// In the current version, this method always succeed.
	int ret = UDT::cleanup();
	Q_ASSERT(ret == 0);
}

// NAMESPACE_END(QUDT)
}
