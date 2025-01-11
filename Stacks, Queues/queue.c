#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int queue[MAX];
int front = -1, rear = -1;
int isEmpty()
{
    return front == -1;
}
int isFull()
{
    return (rear == MAX - 1) && (front == -1);
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue is full");
        return;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d is enqueued to index %d in queue\n", value, rear);
    }
}

int dequeue()
{
    if (isEmpty())
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        int value = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
        return value;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        return queue[front];
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Dequeued: %d\n", dequeue());
    printf("Peek element: %d\n", peek());
}
