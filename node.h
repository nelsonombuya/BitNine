#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

typedef enum
{
    ADD,
    MUL,
    SUB,
    DIV
} TypeTag;

typedef struct
{
    int value;
    Node *node;
} nodeValue;

struct Node
{
    TypeTag type;
    nodeValue left;
    nodeValue right;
};

int calc(Node *node);
int fibonacci(int n);
Node *makeFunc(TypeTag type, nodeValue v1, nodeValue v2);

#endif /* NODE_H */
