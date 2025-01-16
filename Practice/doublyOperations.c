#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertAtBeginning()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new->data);
    new->prev = NULL;
    new->next = head;
    if (head != NULL)
    {
        head->prev = new;
    }
    head = new;
    printf("Node inserted at the beginning\n");
}

void insertAtEnd()
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &new->data);
    new->next = NULL;
    if (head == NULL)
    {
        new->prev = NULL;
        head = new;
        printf("Node inserted at the end\n");
        return;
    }
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new;
    new->prev = p;
    printf("Node inserted at the end\n");
}

void insertAtPosition()
{
    int position, counter = 0;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d", &position);
    printf("Enter the data: ");
    scanf("%d", &new->data);
    if (position == 0)
    {
        new->next = head;
        new->prev = NULL;
        if (head != NULL)
        {
            head->prev = new;
        }
        head = new;
        printf("Node inserted at position %d\n", position);
        return;
    }
    struct node *p = head;
    while (p != NULL && counter < position - 1)
    {
        p = p->next;
        counter++;
    }

    if (p == NULL)
    {
        printf("Position out of bounds\n");
        free(new);
        return;
    }

    new->next = p->next;
    new->prev = p;
    if (p->next != NULL)
    {
        p->next->prev = new;
    }
    p->next = new;
    printf("Node inserted at position %d\n", position);
}

void deleteNode()
{
    int key;
    printf("Enter the value to delete: ");
    scanf("%d", &key);
    struct node *temp = head;
    while (temp != NULL && temp->data != key)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    else
    {
        head = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
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