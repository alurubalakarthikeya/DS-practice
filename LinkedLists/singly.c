#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int singlyInsert()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("Enter the data: ");
    scanf("%d", &new->data);
    new->next = head;
    head = new;
    printf("Node inserted\n");
    return 0;
}

int singlyDelete()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    int key;
    printf("Enter the value to delete: ");
    scanf("%d", &key);
    struct node *temp = head, *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        free(temp);
        printf("Node Deleted\n");
        return 0;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node not found\n");
        return -1;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node Deleted\n");
    return 0;
}

int singlyDisplay()
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    else
    {
        printf("The elements in the list are: ");
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    return 0;
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
            singlyInsert();
            break;
        case 2:
            singlyDelete();
            break;
        case 3:
            singlyDisplay();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}