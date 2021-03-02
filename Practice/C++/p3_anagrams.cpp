/* Problem 3 - Anagrams
Given two strings, a and b , that may or may not be of the same length, determine the minimum number of character deletions required to make a and b anagrams. Any characters can be deleted from either of the strings.

Input :

test cases,t
two strings a and b, for each test case
Output:

Desired O/p

Constraints :

string lengths<=10000

Note :

Anagram of a word is formed by rearranging the letters of the word.

For e.g. -> For the word RAM - MAR,ARM,AMR,RMA etc. are few anagrams.
*/

#include<iostream>
#include <string>

using namespace std;

#define MAX_STR_LEN 10000

int main() {
	int T;
	string strA;
	string strB;

	// Enter the number of test cases
	cin >> T;
	int i = 0;


	for(i=0; i<T;i++) {
		// Enter the first string
		cin >> strA;
		// Enter the second string
		cin >> strB;
		int foundCounter = 0;

		// Check for the length of both strings
		if((strA.length() > MAX_STR_LEN) || (strB.length() > MAX_STR_LEN) ) {
			cout << "String length out of bounds" << endl;
		}

		// Check for the common characters
		for(int i = 0; i < strA.length(); i++) {
			for(int j=0; j< strB.length(); j++) {
				if(strA.at(i) == strB.at(j)) {
					// This is the key operation. 
					// Repeated characters are removed from counting.
					strB[j] = '.';
					foundCounter++;
					break;
				}
			}
		}

		cout << (strA.length() + strB.length() - 2*foundCounter) << endl;

	}



	
}