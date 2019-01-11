#include "stack.h"

//in a stack the push adds to the top of the stack aka new node becomes the new head
node *push(node *head, int value)
{
    node *newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

//in a stack the pop removes the top of the stack aka the head
node *pop(node *head)
{
    node *temp = head;

    if (head != NULL)
    {
        temp = head->next;
        free(head);
    }
    else
    {
        printf("full list deleted\n");
    }
    return temp;
}

//function to print list starting from head
void printList(node *head)
{
    node *current = head;
    printf("\nTOP\n");
    while (current != NULL)
    {
        printf("%d\n", current->num);
        current = current->next;
    }
    printf("BOTTOM\n");
}

//creates new node to add to list
node *createNode(int num)
{
    node *newNode = NULL;
    newNode = malloc(sizeof(node));
    newNode->num = num;
    newNode->next = NULL;
    return newNode;
}