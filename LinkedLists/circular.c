#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void circular_insertion()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for the new node: ");
    scanf("%d", &newNode->data);
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    printf("Node inserted successfully.\n");
}
void circular_deletion()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    int key;
    printf("Enter the data for the node to be deleted: ");
    scanf("%d", &key);
    struct node *temp = head, *prev = NULL;
    if (temp->data == key)
    {
        if (temp->next == head)
        {
            free(head);
            head = NULL;
        }
        else
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = head->next;
            free(head);
            head = temp->next;
        }
        printf("Node deleted successfully.\n");
        return;
    }
    do
    {
        prev = temp;
        temp = temp->next;
    } while (temp != head && temp->data != key);
    if (temp == head)
    {
        printf("Node not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted successfully.\n");
}
void circular_display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            circular_insertion();
            break;
        case 2:
            circular_deletion();
            break;
        case 3:
            circular_display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}