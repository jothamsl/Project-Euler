#include <cstdio>
#include <iostream>

int even_fibonacci(int n)
{
    int a = 1, b = 2, p;
    int c = 0;
    
    while(a <= n)
    { 
        p = a; 
        a = b; 
        b += p; 
        if (p % 2 == 0)
            c += p;
    }
    return c;
}

int main()
{
    int n = 4e6;
    int r = even_fibonacci(n);
    std::cout << r << std::endl;
    return 0;
}
