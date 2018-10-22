#include "linkedList.h"

//example usage for linked list
int main(){

    //Creating head node to start the linked list
    node * head = createHeadNode(6);
    
    //inserting to list sequentially (insert at the end)
    printf("\nINSERTING 6,7,8,9,10 TO THE BACK OF THE LIST\n");

    for(int i=7; i<11; i++){
        insertToBack(head, i);
    }
    printList(head);
    printf("\nINSERTING 1,2,3,4,5 TO HEAD OF THE LIST\n");

    for(int k=5; k>0; k--){
        //pass in memory address of head
        insertToFront(&head, k);
    }
    printList(head);

    return(0);
}

node * createHeadNode(int id){
    node * newNode = NULL;
    newNode = malloc(sizeof(node));
    newNode->id = id;
    newNode->next = NULL;
    return newNode;
}

void insertToFront(node ** head, int value){
    //creating new node to insert to the head
    node * newNode = malloc(sizeof(node));
    newNode->id = value;
    // make new node the head by having its next be the current head and assigning it as the new head
    newNode->next = *head;
    *head = newNode;
}

//function to insert to the back of the list 
void insertToBack(node * head, int value){
    node * newNode = malloc(sizeof(node));
    node * currentNode = head;
    //iterating through list until end of list found
    while(currentNode->next != NULL){
        currentNode = currentNode->next;
    }
    //creating new node to insert to the end
    newNode->id = value;
    newNode->next = NULL;
    //insert new node to the end of the list
    currentNode->next = newNode;    
}

void printList(node * head){
    node * list = head;   
    int counter = 0;
    printf("Current list: \n");
    while(list != NULL){
        printf("List at position [%d] holds value: %d\n", counter, list->id);
        counter++;
        list = list->next;
    }
}
