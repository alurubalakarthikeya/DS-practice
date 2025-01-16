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
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
        head = new;
    }
    printf("Node inserted at the beginning\n");
}

void insertAtEnd()
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
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
    }
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
        if (head == NULL)
        {
            head = new;
            new->next = head;
        }
        else
        {
            struct node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = new;
            new->next = head;
            head = new;
        }
        printf("Node inserted at position %d\n", position);
        return;
    }
    struct node *p = head;
    while (p->next != head && counter < position - 1)
    {
        p = p->next;
        counter++;
    }

    if (counter != position - 1)
    {
        printf("Position out of bounds\n");
        free(new);
        return;
    }

    new->next = p->next;
    p->next = new;
    printf("Node inserted at position %d\n", position);
}

void deleteNode()
{
    int key;
    printf("Enter the value to delete: ");
    scanf("%d", &key);
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
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
    } while (temp != head && temp->data != key);
    if (temp == head)
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
    if (head == NULL)
    {
        printf("List is empty\n");
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