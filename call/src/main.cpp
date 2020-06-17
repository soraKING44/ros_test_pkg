#include <print.h>

int main(int argc, char const *argv[])
{
    Print p;
    for (int i = 0; i < 10; ++i)
    {
        p.print();
    }
    return 0;
}