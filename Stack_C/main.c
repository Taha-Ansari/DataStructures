#include "stack.h"

int main()
{

    int selection = 0;
    int value = 0;

    printf("Please enter value to start the list: ");
    scanf("%d", &value);
    node *head = createNode(value);

    do
    {
        printf("\n\nSelect option: \n1)Push\n2)Pop\n3)Print list\n4)Exit\n\nSelection: ");
        scanf("%d", &selection);

        switch (selection)
        {
            case 1:
            {
                printf("Please enter value to add to the list: ");
                scanf("%d", &value);
                head = push(head, value);
                break;
            }
            case 2:
            {
                head = pop(head);
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