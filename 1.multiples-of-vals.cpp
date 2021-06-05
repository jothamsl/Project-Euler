#include <cstdio>
#include <iostream>

int main(void)
{
    int x = 3, y = 5, v = 0, f = 1000;
    for (int i = 0; i < f; i++)
        if (i % x == 0 || i % y == 0)
            v += i;
    std::cout << v << std::endl;
    return 0;
}
