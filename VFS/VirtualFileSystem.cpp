#include "VirtualFileSystem.h"
#include "Node.h"

std::string_view VirtualFileSystem::getCurrentDirName() const
{
	return currentDirectory->getName();
}
