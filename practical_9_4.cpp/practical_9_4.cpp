#include "practical_9_4.h"
#include <iostream>

void DirectoryManager::addFolder(const string& folder)
{
    if (dir.find(folder) != dir.end())
    {
        std::cout << "Folder already exists";
    }
    else
    {
        dir[folder];
        std::cout << "Folder added";
    }
}

void DirectoryManager::addFile(const string& folder, const string& file)
{
    if (dir.find(folder) == dir.end())
    {
        std::cout << "Folder not found";
    }
    else
    {
        dir[folder].push_back(file);
        std::cout << "File added";
    }
}

void DirectoryManager::display() const
{
    std::cout << "\nDirectory:\n";

    for (auto it = dir.begin(); it != dir.end(); it++)
    {
        std::cout << it->first << ": ";

        for (size_t i = 0; i < it->second.size(); i++)
        {
            std::cout << it->second[i] << " ";
        }
        std::cout << std::endl;
    }
}