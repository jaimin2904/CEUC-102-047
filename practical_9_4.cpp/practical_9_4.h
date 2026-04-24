#ifndef PRACTICAL_9_4_H
#define PRACTICAL_9_4_H

#include <map>
#include <vector>
using std::map;
using std::vector;

class DirectoryManager
{
private:
    map<string, vector<string>> dir;

public:
    void addFolder(const string& folder);
    void addFile(const string& folder, const string& file);
    void display() const;
};

#endif