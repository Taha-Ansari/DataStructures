#include "linkedList.h"

node * createNode(int id){
    node * newNode = NULL;
    newNode = malloc(sizeof(node));
    newNode->id = id;
    newNode->next = NULL;
    return newNode;
}

//function to insert to the front of the list
void insertToFront(node ** head, int value){
    //creating new node to insert to the head
    node * newNode = createNode(value);
    // make new node the head by having its next be the current head and assigning it as the new head
    newNode->next = *head;
    *head = newNode;
}

//function to insert to the back of the list 
void insertToBack(node * head, int value){
    //creating new node to insert to the end
    node * newNode = createNode(value);
    node * currentNode = head;
    //iterating through list until end of list found
    while(currentNode->next != NULL){
        currentNode = currentNode->next;
    }
    newNode->next = NULL;
    //insert new node to the end of the list
    currentNode->next = newNode;    
}

//function to insert at an index
void insertAtIndex(node * head, int index, int value){
    
    node * currentNode = head;
    node * newNode = createNode(value);
    //iterate to index - 1 
    for(int i=0; i<index-1; i++){
        if(currentNode->next != NULL){
            currentNode = currentNode->next;
        }
    }
    newNode->next = currentNode->next;
    currentNode->next = newNode;
}

//function to print the list in sequential order
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

//function to delete from back of the list
void deleteFromBack(node * head){
    node * currentNode = head;
    //iterate to 2nd last node so we can delete the last one
    while(currentNode->next->next != NULL){
        currentNode=currentNode->next;
    }
    //break link to last node
    free(currentNode->next);
    currentNode->next = NULL;
}

//function to delete from front of the list
void deleteFromFront(node**head){
    node * temp = (*head)->next;
    free(*head);
    *head = temp;
}

//function to delete from index 
void deleteFromIndex(node * head, int index){
    node * currentNode = head;

    for(int i=0; i<index-1; i++){
        if(currentNode->next != NULL){
            currentNode = currentNode->next;
        }        
    }
    free(currentNode->next);
    currentNode->next = currentNode->next->next;
}