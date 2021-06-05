#include <cstdio>
#include <iostream>

int main(void)
{
    // x -> first value
    // y -> second value
    // v -> accumulator
    // f -> Upper Bound
   
    int x = 3, y = 5, v = 0, f = 1000;
    for (int i = 0; i < f; i++)
        if (i % x == 0 || i % y == 0)
            v += i;
    std::cout << v << std::endl;
    return 0;
}
