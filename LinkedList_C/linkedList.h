#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int id; 
    struct node* next;
}node;

node * createHeadNode();
void printList();
void insertToBack(node * head, int value);
void insertToFront(node * head, int value);