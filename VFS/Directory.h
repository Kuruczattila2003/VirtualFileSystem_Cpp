#pragma once


#include "Node.h"
#include <vector>
#include <memory>

class Directory : Node {

private:
	using NodePtr = std::shared_ptr<Node>;
	std::vector<NodePtr> children;

public:

	Directory(std::string name) : Node{ std::move(name) } {}

	~Directory() override = default;

	uint32_t getSize() const override;

	void addChild(NodePtr child);

};