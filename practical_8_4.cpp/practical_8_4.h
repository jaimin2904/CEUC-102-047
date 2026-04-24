#ifndef PRACTICAL_8_4_H
#define PRACTICAL_8_4_H

#include <string>
using std::string;

bool openFile(std::ifstream& file, string& filename);
void processFile(std::ifstream& file, float& totalSum, int& validLines);

#endif