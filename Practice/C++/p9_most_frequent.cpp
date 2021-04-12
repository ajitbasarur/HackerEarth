/*
P9 - Problem
This is one of the most easiest problem you will ever code.

Mr. Bournville loves programming and he likes to face new programming challenges. After completing many challenges he has now given you one challenge which is one of his favourites. He has given you a list of N random integers and he wants you to find the integer which has the maximum frequency in the given list.

Being a programmer himself, he had made this task a challenge for you and he will calculate your score for this task using a formula.

Formula for calculating the score : (max_score) - (number of characters in your code/15.0)

Mr. Bournville already has a solution for this but he is not satisfied with his solution. He wants you to write a shortest possible code for this task. In case Frequency of two numbers is same print the smaller one

Input:
First line of input contains N, number of integers.
Second line will contains N spaces separated integers.

Output:
Print the most frequent integer.

Contraints:
3<=N<=104
-106<=Integer<=106

NOTE : Score will awarded after passing all the test files.

Sample Input
5
1 1 1 2 2
Sample Output
1
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Clearly, count of 1 more than count of 2.
*/

#include<iostream>
#include<map>

using namespace std;

int main(){
	
	int N, K, V;
	map<int, int> M;

	cin >> N;

	V = 0;

	for(int i=0; i<N; i++) {
		int K;
		cin >> K;
		M[K]++;
	}

	for(auto i = M.begin(); i!=M.end(); i++){
		if(V < i->second) {
			V = i->second;
			K = i->first;
		}
	}

	cout << K << endl;

	return 0;
}