#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;
int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == MAX - 1;
}
void push(int value)
{
    if (isFull())
    {
        printf("Stack is full");
        return;
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d is inserted into the stack", value);
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    printf("Top element is %d\n", peek());
    printf("Item deleted: %d", pop());
    printf("Top element is %d\n", peek());
    return 0;
}