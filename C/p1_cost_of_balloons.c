/* Problem 1 - Cost Of Balloons

You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons. 

*/

int main() {

	int T;
	int i = 0;

	// Enter the number of test cases
	scanf("%d", &T);
	// Scan each test case
	for(i=0; i<T, i++) {
		int green_balloon, purp_balloon;
		int cost1 = 0;
		int cost2 = 0;
		int num_participants;
		int j = 0;

		// Enter the price of green and purple ballons
		// The values should be separated by commas
		scanf("%d %d",&green_balloon, &purp_balloon);

		if(i%2) {
			// Swap the values
			int temp = green_balloon;
			green_balloon = purp_balloon;
			purp_balloon = temp;
		} 
		

		// Enter the number of participants
		scanf("d", num_participants);

		for(j = 0; j < num_participants; j++) {
			int val1, val2;
			scanf("%d %d", &val1, &val2);
			cost1 += green_balloon*val1;
			cost2 += purple_balloon*val2;
		}

		printf("%d %d\n", cost1, cost12);
	}
	

	return 0;
}