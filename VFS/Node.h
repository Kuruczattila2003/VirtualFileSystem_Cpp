#pragma once
#include <string>


class Node {

private:
	std::string name;

public:

	Node(std::string name) : name{std::move(name)} {}

	virtual ~Node() = 0; 
	virtual uint32_t getSize() const = 0;

};