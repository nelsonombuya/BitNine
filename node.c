#include "node.h"

Node *makeFunc(TypeTag type, nodeValue v1, nodeValue v2)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->type = type;
	newNode->left = v1;
	newNode->right = v2;
	return newNode;
}

int fibonacci(int n)
{
	int fib[n + 1];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	return fib[n];
}

int calc(Node *node)
{
	if (node == NULL)
		return 0;

	if (!node->left.value)
		node->left.value = calc(node->left.node);

	if (node->left.value && !node->right.value && !node->right.node)
		return fibonacci(node->left.value);

	if (!node->right.value)
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
	default:
		return 0;
	}
}

int main()
{
	nodeValue value1, value2;

	value1.value = 10;
	value2.value = 6;
	Node *add = makeFunc(ADD, value1, value2);

	value1.value = 5;
	value2.value = 4;
	Node *mul = makeFunc(MUL, value1, value2);

	value1.value = NULL;
	value2.value = NULL;
	value1.node = mul;
	value2.node = add;
	Node *sub = makeFunc(SUB, value1, value2);

	value1.value = NULL;
	value2.value = NULL;
	value1.node = sub;
	value2.node = NULL;
	Node *fib = makeFunc(SUB, value1, NULL);

	printf("add: %d\n", calc(add));
	printf("mul: %d\n", calc(mul));
	printf("sub: %d\n", calc(sub));

	return (0);
}
