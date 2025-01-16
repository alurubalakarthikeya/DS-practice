#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtBeginning()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data:");
    scanf("%d", &new->data);
    new->next = head;
    head = new;
    printf("Node inserted at the beginning\n");
}

void insertAtEnd()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new->data);
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new;
    new->next = NULL;
    printf("Node inserted at the end\n");
}

void insertAtPosition()
{
    int position;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the data: ");
    scanf("%d", &new->data);
    struct node *p = head;
    int counter = 0;
    while (p->next != NULL)
    {
        p = p->next;
        if (counter == position - 1)
        {
            new->next = p->next;
            p->next = new;
            printf("Node inserted at position %d\n", position);
            return;
        }
        counter++;
    }
}

void deleteNode()
{
    int key;
    printf("Enter the value to delete: ");
    scanf("%d", &key);
    struct node *temp = head, *prev = NULL;
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        free(temp);
        printf("Node deleted\n");
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Node deleted\n");
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete node\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtBeginning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPosition();
            break;
        case 4:
            deleteNode();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}