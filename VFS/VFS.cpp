// VFS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shell.h"
#include "VirtualFileSystem.h"

int main()
{
    VirtualFileSystem vfs{};
    Shell sh{vfs};

    while (1) {
        sh.takeCommand();
    }

    return 0;
}