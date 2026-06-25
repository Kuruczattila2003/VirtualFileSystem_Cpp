#pragma once

#include "Node.h"
#include <vector>

class File: Node {

private:
	std::vector<uint8_t> payload;

public:

	File(std::string name) : Node{ std::move(name) } {}

	File(std::string name, std::vector<uint8_t> payload) : Node{ std::move(name) }, payload{std::move(payload)} {}

	virtual ~File() {}

	virtual uint32_t getSize() const;

};