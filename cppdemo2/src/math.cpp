#include <iostream>
#include <string>
#include <map>

#include "../include/math.h"

class Add {
public:
    Add(){}
    ~Add(){}

    int Do(int a, int b)
    {
        return a+b;
    }
};

int add(int a, int b)
{
    std::cout << "I am c/c++" << std::endl;

    Add add;
    return add.Do(a, b);
}

static int s_cc = 0;
int dosomething(int* cc)
{
    if(++s_cc % 2 == 0)
    {
        *cc = 0;
        return 0;
    }

    return 1;
}