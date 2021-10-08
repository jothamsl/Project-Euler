#include <iostream>

bool palindrome_check(int x)
{
    int n = x;
    int remainder, reverse = 0; 
    while (x > 0)
    {
        remainder = x % 10;
        reverse = (reverse * 10) + remainder;
        x /= 10;
    }
    if (n == x) return true;
    return false;
    
}

int main(void)
{
    int min = 100, max = 999;
    printf("%i\n", palindrome_check(10001));
}

