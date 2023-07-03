#include <stdio.h>
#define MAX_SIZE 1000
int dp[MAX_SIZE];

void initializeTable()
{
	/* Initialize table with -1 */
	for (int i = 0; i < MAX_SIZE; i++)
		dp[i] = -1;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
}

int F_tabulation(int n)
{
	if (dp[n] != -1)
		return dp[n];

	for (int i = 3; i <= n; i++)
		dp[i] = dp[i - 3] + dp[i - 2];

	return dp[n];
}

int main()
{
	initializeTable();

	while (1)
	{
		int n;

		printf("Enter the value of n (Input a number less than 0 to exit): ");
		scanf("%d", &n);

		if (n < 0)
			break;

		int result = F_tabulation(n);
		printf("F(%d) = %d\n", n, result);
	}
	return 0;
}
