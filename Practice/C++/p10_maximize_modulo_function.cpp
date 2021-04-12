/*
Problem
You are given an integer  that is represented in the form of string  of length . You can remove at most 1 digit from the number after removing the rest of the digits that are arranged in the same order.

Example

For , if you delete the digit , the new number is .

You are also given an integer . Find the maximum possible value of ( mod ) after deleting at most 1 digit from number .

Input format

The first line contains an integer  denoting the number of test cases.
The first line of each test case contains two space-separated integers  and .
The second line of each test case contains string .
Output format

For each test case, print the maximum possible value of the mod function in a new line.

Constraints


Sample Input
1
5 12
52436
Sample Output
11
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
If we remove the last digit from the number , then the new number will be .
*/

#include<iostream>
#include<string>
#include<vector>
#include <sstream>


using namespace std;
int main() {
	
	int T;

	// Enter the test case
	cin >> T;

	for (int i=0;i<T; i++) {
		int M;
		int K;
		string input;

		// Enter the string
		cin >> M;
		cin >> K;

		cin >> input;

		if(input.length() != M) {
			cout << "String mismatch: Expected " << M << " ,Entered " << input.length() << endl;
			return -1;
			
		}

		int N;
		istringstream(input) >> N;
		int maxMod = N%K;
		int j = 0;
		int mod = 0;
		do {
			string S(input);
			S.erase(j, 1);
			istringstream(S) >> N;
			if (N < K) {
				mod = N;
			} else {
				mod = N%K;
			}
			if(mod > maxMod) {
				maxMod = mod;
			}
		}while(j++ < M);

		cout << maxMod << endl;

	}
	return 0;
}