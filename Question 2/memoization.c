#include <stdio.h>
#define MAX_SIZE 1000
int memo[MAX_SIZE];

void initializeTable()
{
	/* Initialize memoization table with -1 */
	for (int i = 0; i < MAX_SIZE; i++)
		memo[i] = -1;
}

int F_memoization(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;

	if (memo[n] != -1)
		return memo[n];

	memo[n] = F_memoization(n - 3) + F_memoization(n - 2);
	return memo[n];
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

		int result = F_memoization(n);
		printf("F(%d) = %d\n", n, result);
	}

	return 0;
}
