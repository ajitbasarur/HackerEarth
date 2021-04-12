/*
p8 - A XOR Operation
Problem
You are given a set  of distinct positive integers of size  ( is always even). Print the minimum positive integer  that is greater than 0 such that after replacing each element  of the set  with , set  remains the same.

Print -1 if there is no such .

Note: It is guaranteed that  is odd.

Input format

The first line contains a single integer  denoting the number of test cases.
The first line of each test case contains a single integer  denoting the number of elements in the set.
The second line of each test case contains  integers .
Output format

Print  lines each containing a single line that contains .

Sample Input
1
6
5 6 9 10 13 14
Sample Output
3
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
By performing the XOR of k with each element we get the given set S

5⊕3=6

6⊕3=5

13⊕3=14

14⊕3=13

9⊕3=10

10⊕3=9

S' = {6,5,14,13,10,9} which is same as S={5,6,13,14,9,10}
*/

#include<iostream>

using namespace std;


int main(void){

	int t;
	int n = 0;
	
	// Enter the number of test cases
	cin >> t;

	// Loop for each test case
	for(int i=0; i<t; i++){
		//unordered_map<int, int> arrayMap;
		int k=0;
		int cumSum1 = 0;
		int cumSum2 = 0;

		// Enter the size of the test S
		cin >> n;

		// Create an array for the following numbers
		int *S1 = new int[n];
		int *S2 = new int[n];	
		
		// Get the numbers from the stdio
		// Simultaneously find the value of k
		// k is xor of all input numbers
		for(int j=0; j<n; j++) {
			cin >> S1[j];
			k = S1[j] ^ k;
			cumSum1 += S1[j];
		}

		// Iterate through each of the elements
		// Apply XOR operator and find out if it exists
		for(int j=0; j<n; j++) {
			S2[j] = S1[j] ^ k;
			cumSum2 += S2[j];
		}

		// This is an important operation
		// Instead of comparing each element of an array, their properties are calculated.
		// Right now, only the additional property of set S is used.
		// This is done to reduce the computational cost.
		// Sorting arrays and comparing each element requires N +2NlogN operations
		// unordered_map using hash tables is also an expensive operation

		if(cumSum1 != cumSum2) {
			k = -1;
		}

		cout << k << endl;


		delete[] S1;
		delete[] S2;
	}

	return 0;
}