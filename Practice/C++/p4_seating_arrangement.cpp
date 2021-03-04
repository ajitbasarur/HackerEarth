/* Seating Arrangement

Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1<=T<=105
1<=N<=108
*/

#include<iostream>

// The seating arrangement repeats itself for each compartment.
// The total size of the apartment is 12
#define COMPARTMENT_SIZE 12

// In each compartment, there are three types of seats namely
// Window Seat, Middle Seat, and Aisle Seat.

#define WS_1  0
#define WS_2  1 
#define WS_3  6
#define WS_4  7

#define MS_1  2
#define MS_2  5 
#define MS_3  8
#define MS_4  11

#define AS_1  3
#define AS_2  4 
#define AS_3  9
#define AS_4  10

using namespace std;

string get_seat_type(int S){

	int val = S%COMPARTMENT_SIZE;

	if((WS_1 == val) || (WS_2 == val) || (WS_3 == val) || (WS_4 == val)) {
		return "WS";
	} else if((MS_1 == val) || (MS_2 == val) || (MS_3 == val) || (MS_4 == val)) {
		 return "MS";
	} else {
		 return "AS";
	}
}

int get_opposite_seat(int S) {
	// The arrangement of seat is fixed. So are the opposite seats.
	int opp_seat[] = {1, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

	// The floor function is implemented in simple way 
	// Make sure that the seat number is greater than 1
	int seat_mult = (S-1)/COMPARTMENT_SIZE;
	seat_mult = seat_mult*COMPARTMENT_SIZE;

	// Any given seat is reduced between 1 and 12, then evaluated.
	return seat_mult + opp_seat[S%COMPARTMENT_SIZE];
}

int main() {

	int T;
	int S;
	
	// Enter the number of test cases
	cin >> T;

	for (int i = 0; i < T; i++) {
		// Enter the seat number
		cin >> S;

		cout << get_opposite_seat(S) << ' '; 
		cout << get_seat_type(S) << endl;
	}

	return 0;
	
}