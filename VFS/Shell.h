#pragma once
#include <memory>
#include <unordered_map>
#include <string>

class VirtualFileSystem;

class Shell {

private:
	VirtualFileSystem& vfs; //filesystem definitely outlives Shell and the ownership is not shared 

	void ls(const std::vector<std::string>& args);
	void pwd(const std::vector<std::string>& args);
	void cd(const std::vector<std::string>& args);
	void touch(const std::vector<std::string>& args);
	void mkdir(const std::vector<std::string>& args);


	using CommandHandler = void (Shell::*)(const std::vector<std::string>&);

	std::unordered_map<std::string, CommandHandler> commandTable = {
		{"ls", &Shell::ls},
		{"pwd", &Shell::pwd},
		{"cd", &Shell::cd},
		{"touch", &Shell::touch},
		{"mkdir", &Shell::mkdir}
	};

public:

	Shell(VirtualFileSystem& vfs) : vfs{ vfs } {}

	void takeCommand();
};