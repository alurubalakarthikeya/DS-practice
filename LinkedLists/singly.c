#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void singly_insertion()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for the new node: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    printf("Node inserted successfully.\n");
}
void singly_deletion()
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
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        free(temp);
        printf("Node deleted successfully.\n");
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted successfully.\n");
}
void singly_display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
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
            singly_insertion();
            break;
        case 2:
            singly_deletion();
            break;
        case 3:
            singly_display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}