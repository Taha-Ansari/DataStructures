#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
} node;

node *push(node *head, int value);
node *pop(node *head);
void printList(node *head);
node *createNode(int id);