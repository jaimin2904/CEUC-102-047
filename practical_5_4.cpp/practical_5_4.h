#ifndef PRACTICAL_5_4_H
#define PRACTICAL_5_4_H

#include <ostream>

std::ostream& currency(std::ostream& out);

class StudentManager
{
private:
    string name;
    float marks;
    float fees;

public:
    void addStudent();
    void displayAll(int n) const;
};

#endif