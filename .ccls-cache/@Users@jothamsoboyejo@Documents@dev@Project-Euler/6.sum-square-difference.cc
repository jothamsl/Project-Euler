#include <assert.h>
#include <cstdio>
#include <iostream>

int main()
{
    int n = 100, sum_squares = 0, square_sum = 0;
    for (int i = 1; i <= n; i++) {
        sum_squares += i * i;
        square_sum += i;
    }
    square_sum = square_sum * square_sum;
    std::cout << square_sum - sum_squares << "\n";
    return 0;
}
