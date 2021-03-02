/* Monk and Rotation Problem
Monk loves to preform different operations on arrays, and so being the principal of Hackerearth School, he assigned a task to his new student Mishki. Mishki will be provided with an integer array A of size N and an integer K , where she needs to rotate the array in the right direction by K steps and then print the resultant array. As she is new to the school, please help her to complete the task.

Input:
The first line will consists of one integer T denoting the number of test cases.
For each test case:
1) The first line consists of two integers N and K, N being the number of elements in the array and K denotes the number of steps of rotation.
2) The next line consists of N space separated integers , denoting the elements of the array A.
Output:
Print the required array. 
*/

#include<iostream>

using namespace std;

int main() {
	// Declare the variables
	unsigned int T;
	unsigned int N;
	unsigned int K;
	unsigned int i = 0;

	// Enter the number of test cases
	cin >> T;
	// Enter the size of array
	cin >> N;
	// Enter the number of steps
	cin >> K;

	unsigned int *A = new unsigned int [N];
	unsigned int *B = new unsigned int[N];

	while(i++ < N) {
		A[i] = i;
	}

	cout << A << "\n";

	// Rotate the array
	memcpy(B, &A[K], N-K);
	for(i=0; i<K; i++) {
		B[N-K+i] = A[i];
	}

	cout << B << "\n";


	// Delete the array before the program is exited
	delete[] A;


	return 0;
}