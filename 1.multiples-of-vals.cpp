#include <cstdio>
#include <iostream>

/* 
 * PROBLEM:
 * --------
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

int main(void)
{
    // x -> first value
    // y -> second value
    int x = 3, y = 5, accumulator = 0, upper_bound = 1000;

    // Loop 'upper_bound' times
    for (int i = 0; i < upper_bound; i++)
        // if x or y divided by i has no remainder 
        if (i % x == 0 || i % y == 0)
            accumulator += i; // Increment accumulator by i

    std::cout << accumulator << std::endl;
    return 0;
}
