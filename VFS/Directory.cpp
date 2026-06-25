#include "Directory.h"

uint32_t Directory::getSize() const
{
    uint32_t size = 0;

    for (auto node: children) {
        size += node->getSize();
    }

    return size;
}

void Directory::addChild(NodePtr child)
{
    children.push_back(std::move(child));
}
