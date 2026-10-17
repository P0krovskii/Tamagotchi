#include <stdio.h>
class Item
{
public:
    virtual void Use() { printf("nig"); }
};

class Apple : public Item
{
public:
    virtual void Use() { printf("aboba"); }
};

int main()
{
    Item* item = new Apple();
    item->Use();
    ((Apple*)item)->Use();
    return 0;
}
