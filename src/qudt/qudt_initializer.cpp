#include "qudt_initializer.h"

#include "udt.h"

namespace QUDT
{
	Initializer::Initializer()
	{
		int ret = UDT::startup();
	}

	Initializer::~Initializer()
	{
		int ret = UDT::cleanup();
	}
}
