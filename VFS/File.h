#pragma once

#include "Node.h"
#include <vector>

class File: public Node {

private:
	std::vector<uint8_t> payload;

public:

	File(std::string name) : Node{ std::move(name) } {}

	File(std::string name, std::vector<uint8_t> payload) : Node{ std::move(name) }, payload{std::move(payload)} {}

	virtual ~File() {}

	virtual size_t getSize() const;

};