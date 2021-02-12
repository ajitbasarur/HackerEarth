/* Problem Statement
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S.
*/

// Write your code here
int main() {
	int N;
	char a[100];

	// Constraints 
	// 0 <= N <=10
	// string length <= 15

	while(1) {
		scanf("%d", &N);
		if((N >= 0) || (N <= 10)) {
			break;
		}
	}

	while(1) {
		scanf("%s", a);
		if(strlen(a) <= 15) {
			break;
		}
	}

	printf("%d\n", N*2);
	printf("%s\n", a);

	return 0;
}