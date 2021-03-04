/* Factorial
Problem
You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. You can read more about the factorial of a number here.

Input Format:
The first and only line of the input contains a single integer N denoting the number whose factorial you need to find.

Output Format
Output a single line denoting the factorial of the number N.

Constraints
1 <= N <= 10
*/

#include<iostream>

using namespace std;

// This factorial function uses recursive method.
int factorial_1(int N) {
	if(1 == N) {
		return 1;
	} else {
		return N*factorial_1(N-1);
	}
}

// This factorial function uses for loop.
int factorial_2(int N) {
	int factorialN = N;
	do {
		factorialN *= (N-1);
		N--;
	} while(N > 1);

	return factorialN;
}

int main() {
	int T;
	int N;

	// Enter the number N
	cin >> N;

	cout << factorial_1(N);

	return 0;
}