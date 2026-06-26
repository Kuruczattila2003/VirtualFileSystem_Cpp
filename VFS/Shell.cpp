#include "Shell.h"
#include <iostream>
#include <string>
#include "Node.h"
#include "VirtualFileSystem.h"
#include <sstream>

void Shell::ls(const std::vector<std::string>& args)
{
	std::cout << "Called: ls" << std::endl;
}

void Shell::pwd(const std::vector<std::string>& args)
{
	std::cout << "Called: pwd" << std::endl;

}

void Shell::cd(const std::vector<std::string>& args)
{
	std::cout << "Called: cd" << std::endl;

}

void Shell::mkdir(const std::vector<std::string>& args)
{
	std::cout << "Called: mkdir" << std::endl;

}

void Shell::touch(const std::vector<std::string>& args)
{
	std::cout << "Called: touch" << std::endl;

}

void Shell::takeCommand()
{
	std::string input;
	std::vector<std::string> args;

	std::string_view nameView = vfs.getCurrentDirName();
	std::cout << nameView << "> ";
	
	//split the command
	std::getline(std::cin, input);
	
	std::istringstream stream(input);
	std::string arg;
	while(stream >> arg) {
		args.push_back(arg);
	}

	if (args.empty()) return;

	auto it = commandTable.find(args[0]);
	if (it != commandTable.end()) {
		CommandHandler func = it->second;
		(this->*func)(args);
	}
	else {
		std::cout << "Command not found: " << args[0] << "\n";
	}

}
