#include <cmath>
#include <cstdio>
#include <iostream>

/*
 * PROBLEM
 * -------
 *  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see 
 *  that the 6th prime is 13. What is the 10,001st prime number?
 */

bool is_prime(int x)
{
    int i = 5;
    if (x <= 3)
        return x > 1;
    if (x % 2 == 0 || x % 3 == 0)
        return false;
    while (pow(i, 2) <= x) {
        if (x % i == 0 || x % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int main()
{
    // i -> Counter for how many prime numbers considered so far
    // j -> Current Prime number
    int i = 2, j = 3;

    // While prime number count is not equal to 10001
    while (i != 10001) {
        j += 2; // move to next value
        // if current value "j" is a prime value
        if (is_prime(j)) {
            i++;      // increment prime count
            continue; // jump to next loop
        }
    }
    std::cout << j << std::endl;
}
