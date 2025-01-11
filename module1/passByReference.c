#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping (in function): a = %d, b = %d\n", x, y);
}
int main()
{
    int a, b;
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping (in main): a = %d, b = %d\n", a, b);
    return 0;
}