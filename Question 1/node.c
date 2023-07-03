#include "node.h"
#define MAX_N 1000
int fib[MAX_N];

int fibonacci(int n)
{
	if (fib[n] != -1)
		return fib[n];

	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	fib[n] = fibonacci(n - 1) + fibonacci(n - 2);

	return fib[n];
}

Node *makeFunc(TypeTag type, NodeValue v1, NodeValue v2)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->type = type;
	newNode->left = v1;
	newNode->right = v2;
	return newNode;
}

int calc(Node *node)
{
	if (node == NULL)
		return 0;

	if (node->left.node != NULL && !node->left.value)
		node->left.value = calc(node->left.node);

	if (node->right.node != NULL && !node->right.value)
		node->right.value = calc(node->right.node);

	switch (node->type)
	{
	case ADD:
		return node->left.value + node->right.value;
	case MUL:
		return node->left.value * node->right.value;
	case SUB:
		return node->left.value - node->right.value;
	case DIV:
		return node->left.value / node->right.value;
	case FIB:
		return fibonacci(node->left.value);
	default:
		return 0;
	}
}

int main()
{
	/* Initialize memoization table with -1 */
	for (int i = 0; i < MAX_N; i++)
		fib[i] = -1;

	NodeValue value1, value2;

	value1.value = 10;
	value2.value = 6;
	Node *add = makeFunc(ADD, value1, value2);

	value1.value = 5;
	value2.value = 4;
	Node *mul = makeFunc(MUL, value1, value2);

	value1.value = 0;
	value2.value = 0;
	value1.node = mul;
	value2.node = add;
	Node *sub = makeFunc(SUB, value1, value2);

	value1.value = 0;
	value2.value = 0;
	value1.node = sub;
	value2.node = NULL;
	Node *fib = makeFunc(FIB, value1, value2);

	printf("add: %d\n", calc(add));
	printf("mul: %d\n", calc(mul));
	printf("sub: %d\n", calc(sub));
	printf("fib: %d\n", calc(fib));

	return (0);
}
