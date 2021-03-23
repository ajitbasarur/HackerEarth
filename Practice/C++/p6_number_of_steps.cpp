/* Number of steps

Problem
You are given two arrays  and . In each step, you can set  if . Determine the minimum number of steps that are required to make all a's equal.

Input format

First line:  
Second line: 
Third line: 
Output format

Print the minimum number of steps that are required to make all 's equal. If it is not possible, then print -1.

Constraints


Sample input

2
5 6
4 3

Sample output

-1
*/

#include<iostream>

using namespace std;
#define METHOD_2

/* Two methods are provided.
In the first method, an additional second loop is used. More computation.
In the second method, division and modulo operations are used. Faster computation.
*/ 
int calc_number_steps_method(int C){

	int numOfSteps = 0;
	// Maximum value of the element
	int minA = 32000;

	// Create arrays of specific size
	int* arrA = new int[C];
	int* arrB = new int[C]; 

	// Enter input array A
	for(int i=0; i<C; i++) {
		cin >> arrA[i];
		if(arrA[i] < minA) {
			minA = arrA[i];
		}
	}

	// Enter input array B
	for(int i=0; i<C; i++) {
		cin >> arrB[i];
	}

	// Logic
	for(int i = 0; i < C; i++) {

#ifdef METHOD_1
		while(arrA[i] > minA) {
			arrA[i] = arrA[i] - arrB[i];
			numOfSteps++;
		}
#endif
#ifdef METHOD_2 
		if(arrA[i] > minA) {
			int diff = arrA[i] - minA;
			if(0 != (diff%arrB[i])) {
				numOfSteps = -1;
				break;
			}
			numOfSteps += diff/arrB[i];
		} 
#endif
		if(arrA[i] == minA){
			continue;
		}
		
		if(arrA[i] < minA){
			numOfSteps = -1;
			break;
		}
	}

	// Delete the arrays from heap memory
	delete[] arrA;
	delete[] arrB;

	return numOfSteps;

}

int main() {

	int C;
	
	// Enter the size of array
	cin >> C;

	cout << calc_number_steps_method(C) << endl;

	return 0;
}