#include <cstdio>
#include <cstdlib>
#include <iostream>

/* 
 * PROBLEM:
 * --------
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
 * The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */

void solution(int x, int y, int accumulator, int upper_bound)
{
    // x -> first value
    // y -> second value

    // Loop 'upper_bound' times
    for (int i = 0; i < upper_bound; i++)
        // if i divided by x or y has no remainder
        if (i % x == 0 || i % y == 0)
            accumulator += i; // Increment accumulator by i
    std::cout << accumulator << std::endl;
}

void p_solution(int x, int y, int upper_bound)
{
    // Lambda function
    auto sum_divisible_by = [&upper_bound](int v) {
        // p: This is the amount of times v would divide
        // the upper_bound evenly
        int p = upper_bound / v;
        // 1+2+3+...+p=1/2*p*(p+1)
        return v * (p * (p + 1)) / 2;
    };
    std::cout << sum_divisible_by(x) + sum_divisible_by(y) - sum_divisible_by(x * y) << "\n";
}

int main(void)
{
    int x = 3, y = 5, accumulator = 0, upper_bound = 999;
    solution(x, y, accumulator, upper_bound); // My solution
    p_solution(x, y, upper_bound); // Project Euler solution
    return 0;
}
