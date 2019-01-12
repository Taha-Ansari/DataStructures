#include "queue.h"

int main()
{
    //Queues behave FIFO (First in first out)
    int selection = 0;
    int value = 0;

    printf("Please enter value to start the queue: ");
    scanf("%d", &value);
    node *head = createNode(value);

    for(int i=2; i<=5; i++){
        head=push(head, i);
    }

    do
    {
        printf("\n\nSelect option: \n1)Push\n2)Pop\n3)Print queue\n4)Exit\n\nSelection: ");
        scanf("%d", &selection);

        switch (selection)
        {
            case 1:
            {
                printf("Please enter value to add to the queue: ");
                scanf("%d", &value);
                head = push(head, value);
                break;
            }
            case 2:
            {
                pop(head);
                break;
            }
            case 3:
            {
                printList(head);
                break;
            }
            case 4:
            {
                printf("Exiting ...\n\n");
                break;
            }
            default:
            {
                printf("Please select a valid option\n");
                break;
            }
        }
    } while (selection != 4);

    return 0;
}