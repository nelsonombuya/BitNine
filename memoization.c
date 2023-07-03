#include <stdio.h>
#define MAX_SIZE 1000
int memo[MAX_SIZE];

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
	/* Initialize memoization table with -1 */
	for (int i = 0; i < MAX_SIZE; i++)
		memo[i] = -1;

	while (1)
	{
		int n;

		printf("Enter the value of n (Input -1 to exit): ");
		scanf("%d", &n);

		if (n == -1)
			break;

		int result = F_memoization(n);
		printf("F(%d) = %d\n", n, result);
	}

	return 0;
}
