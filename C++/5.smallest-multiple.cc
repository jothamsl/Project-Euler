#include <bits/c++io.h>

/* 
 *
 * PROBLEM:
 * -------
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10
 * without any remainder. What is the smallest positive number that is evenly divisible by all
 * of the numbers from 1 to 20?
 *
 */
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
    // List of possible factors
    const int dividers[] = { 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    // Number of list above
    const size_t dividersLength = sizeof(dividers) / sizeof(int);
    // Pick a random number between [50, 100]
    long long int current_number = (rand() % 100 - 50) + 50;

    // Infinite loop
    while (current_number++) {
        // If an odd number, skip
        // Example: 25 (0001 1001)
        // ----------AND----------
        //           1 (0000 0001)
        // -----------------------
        //              0000 0001
        // Example 2: 22 (0001 0110)
        // -------------AND---------
        //             1 (0000 0001)
        // -------------------------
        //                0000 0000
        if ((current_number & 1) == 1)
            continue;

        // Increments every time the current number is divisible by a number in dividers
        int divisible_counter = 0;
        // Go through dividers list
        for (int j = 0; j < dividersLength; j++)
            // If currentNumber is divisible by divider[j]
            if (current_number % dividers[j] == 0)
                divisible_counter++;
            // If i is not divisble, quit loop (so as not to waste time)
            else
                break;

        // If i is divisible by every item in divider list, print the number
        // and it's values when divided by the values in dividers array
        if (divisible_counter == dividersLength) {
            std::cout << "Number found! (" << current_number << ")\n";
            for (int k = 1; k <= 20; k++)
                std::cout << current_number << " / " << k << " = " << current_number / k << std::endl;
            break;
        }
    }

    return 0;
}
