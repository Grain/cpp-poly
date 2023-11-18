#include <iostream>

using namespace std;

class foo
{
public:
    virtual int f() = 0;

};

int foo::f()
{
    return 1;
}


class bar : public foo
{
public:
    int f()
    {
        return 2;
    }
};


int main()
{
    bar b;
}
