#include "print.h"

#include <iostream>

Print::Print()
{
    count = 0;
}

void Print::print()
{
    count++;
    std::cout << count << ": Hello world" << std::endl;
}
