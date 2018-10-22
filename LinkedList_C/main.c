#include "linkedList.h"

//example usage for linked list
int main(){

    //Creating head node to start the linked list
    node * head = createNode(6);
    
    //inserting to list sequentially (insert at the end)
    printf("\nINSERTING 6,7,8,9,10 TO THE BACK OF THE LIST\n");
    for(int i=7; i<11; i++){
        insertToBack(head, i);
    }
    printList(head);

    //inserting to list from the front
    printf("\nINSERTING 1,2,3,4,5 TO HEAD OF THE LIST\n");
    for(int k=5; k>0; k--){
        //pass in memory address of head
        insertToFront(&head, k);
    }
    printList(head);

    //inserting to index 3
    printf("\nINSERTING VALUE 100 TO INDEX 3 IN THE LIST\n");
    insertAtIndex(head, 3, 100);
    printList(head);

    //deleting from the back of the list
    printf("\nDELETING 2 ITEMS FROM THE BACK OF THE LIST\n");
    deleteFromBack(head);
    deleteFromBack(head);
    printList(head);

    //deleting from the front of the list
    printf("\nDELETING 2 ITEMS FROM THE FRONT OF THE LIST\n");
    deleteFromFront(&head);
    deleteFromFront(&head);
    printList(head);
    return(0);
}
