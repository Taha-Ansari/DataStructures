#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int id; 
    struct node* next;
}node;

node * createNode();
void printList();
void insertToBack(node * head, int value);
void insertToFront(node ** head, int value);
void insertAtIndex(node * head, int index, int value);
void deleteFromBack(node * head);
void deleteFromFront(node ** head);