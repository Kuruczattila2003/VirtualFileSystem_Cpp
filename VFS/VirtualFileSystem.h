#pragma once

#include <memory>
#include <string_view>
#include "Directory.h"

class Node;

class VirtualFileSystem {

private:

	std::shared_ptr<Directory> currentDirectory;

public:

	VirtualFileSystem() : currentDirectory{ std::make_shared<Directory>(Directory{"root"})} {}

	std::string_view getCurrentDirName() const;

};