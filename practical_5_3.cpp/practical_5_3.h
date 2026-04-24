#ifndef PRACTICAL_5_3_H
#define PRACTICAL_5_3_H

#include <string>
using std::string;

class InventoryManager
{
private:
    string name;
    int qty;
    float price;

public:
    void addItem();
    void viewAll() const;
    void searchItem(const string& searchName) const;
};

#endif