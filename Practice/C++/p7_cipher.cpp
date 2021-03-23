/* Cipher
Problem
Indian army is going to do a surprise attack on one of its enemies country. The President of India, the Supreme Commander of the Indian Army will be sending an alert message to all its commanding centers. As enemy would be monitoring the message, Indian army is going to encrypt(cipher) the message using basic encryption technique. A decoding key 'K' (number) would be sent secretly.

You are assigned to develop a cipher program to encrypt the message. Your cipher must rotate every character in the message by a fixed number making it unreadable by enemies.

Given a single line of string 'S' containing alpha, numeric and symbols, followed by a number '0<=N<=1000'. Encrypt and print the resulting string.

Note: The cipher only encrypts Alpha and Numeric. (A-Z, a-z, and 0-9) . All Symbols, such as - , ; %, remain unencrypted.

Sample Input
All-convoYs-9-be:Alert1.
4
Sample Output
Epp-gsrzsCw-3-fi:Epivx5.
Time Limit: 2
Memory Limit: 256
Source Limit:
Explanation
First line contains the string to convert. S

Second line contains the number, encrypt key. K

A becomes E, Y becomes C, 9 becomes 3,

-, . unchanged.
*/
#include<iostream>

using namespace std;

#define ALPHABET_LENGTH 26
#define NUMERIC_LENGTH  10

#define SMALL_ALPHABET_A 'a'
#define BIG_ALPHABET_A   'A'
#define SMALL_ALPHABET_z 'z'
#define BIG_ALPHABET_Z   'Z'
#define ALPHANUMMER_0    '0'
#define ALPHANUMMER_9    '9'

char cipher(char input, int K) {
	char output;
	// Cipher small letters
	if((input >= SMALL_ALPHABET_A) && (input <= SMALL_ALPHABET_z)) {
		K = K%ALPHABET_LENGTH;
		output = (input+K-SMALL_ALPHABET_A)%ALPHABET_LENGTH + SMALL_ALPHABET_A;

	} else if ((input >= BIG_ALPHABET_A) && (input <= BIG_ALPHABET_Z)) {
		K = K%ALPHABET_LENGTH;
		output = (input+K-BIG_ALPHABET_A)%ALPHABET_LENGTH + BIG_ALPHABET_A;

	} else if((input >= ALPHANUMMER_0) && (input <= ALPHANUMMER_9)) {
		K = K%NUMERIC_LENGTH;
		output = (input+K-ALPHANUMMER_0)%NUMERIC_LENGTH + ALPHANUMMER_0;

	} else {
		output = input;
	}
	return output;
}

int main() {

	string strS;
	int K;
	
	// Enter the string
	cin >> strS;

	// Enter the cipher to be rotated
	cin >> K;

	//

	for(int i=0; i<strS.length(); i++){
		char c = cipher(strS[i], K);
		cout << c;
	};

	cout << endl;


	return 0;
}