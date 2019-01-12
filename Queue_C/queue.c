#include "queue.h"

//in a queue the push adds to the top of the queue aka new node becomes the new head
node *push(node *head, int value)
{
    node *newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

//in a queue the pop removes the end of the queue aka the tail
void pop(node *head)
{
    node *temp = head;

    if (head != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    else
    {
        printf("Queue is empty");
    }
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