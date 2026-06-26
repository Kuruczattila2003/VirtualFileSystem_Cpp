#pragma once


#include "Node.h"
#include <vector>
#include <memory>

class Directory : public Node {

private:
	using NodePtr = std::shared_ptr<Node>;
	std::vector<NodePtr> children;

public:

	Directory(std::string name) : Node{ std::move(name) } {}

	~Directory() override = default;

	size_t getSize() const override;

	void addChild(NodePtr child);

};