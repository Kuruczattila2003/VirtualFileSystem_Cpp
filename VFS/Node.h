#pragma once
#include <string>
#include <string_view>


class Node {

private:
	std::string name;

public:

	Node(std::string name) : name{std::move(name)} {}

	virtual ~Node() = default;
	virtual size_t getSize() const = 0;

	std::string_view getName() const;

};