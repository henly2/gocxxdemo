#include <iostream>
#include <string>
#include <map>

#include "math.h"

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

