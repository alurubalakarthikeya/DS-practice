#include <stdio.h>
void traverse(int arr[])
{
    arr[0] = 0;
    arr[1] = 0;//the arrays will be sent with addresses of all indexes so values can be changed
    printf("The elements in the array are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[10];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    traverse(arr);
    return 0;
}