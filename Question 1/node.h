#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct NodeValue NodeValue;

typedef enum
{
    ADD,
    MUL,
    SUB,
    DIV,
    FIB
} TypeTag;

struct NodeValue
{
    int value;
    Node *node;
};

struct Node
{
    TypeTag type;
    NodeValue left;
    NodeValue right;
};

int calc(Node *node);
int fibonacci(int n);
Node *makeFunc(TypeTag type, NodeValue v1, NodeValue v2);

#endif /* NODE_H */
