#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct ndoe *next;
};
struct node *head = NULL;
int circularInsert()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new->data);
    if (head == NULL)
    {
        head = new;
        new->next = head;
    }
    else
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
    }
    printf("Node inserted\n");
}
int circularDelete()
{
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    int key;
    printf("Enter the element to delete: ");
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
        printf("Node deleted\n");
        return;
    }
    do
    {
        prev = temp;
        temp = temp->next;
    } while (temp->next != head && temp->data != key);
    if (temp->next == head)
    {
        printf("Node not found\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted\n");
}
void circularDisplay()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    int choice;
    while (1)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            circularInsert();
            break;
        case 2:
            circularDelete();
            break;
        case 3:
            circularDisplay();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}