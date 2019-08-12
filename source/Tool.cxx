
#include <tool/Tool.h>

#include <cstdio>

#include <util/Util.h>


namespace tool
{
	auto Tool () -> void
	{
		std::puts("Tool");

		util::Util();

		return;
	}
}
