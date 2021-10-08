package main

import "fmt"

// PROBLEM
// -------
// If we list all the natural number below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum
// of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

func f(a, b, z int) int {
	// a & b -> Multiples
	// z -> Upper bound

	var cummulator int

	for i := 0; i < z; i++ {
		if i%a == 0 || i%b == 0 {
			cummulator += i
		}
	}
	return cummulator
}

func main() {
	var y int = f(3, 5, 1000)
	fmt.Println(y)
}
