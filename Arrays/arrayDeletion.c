#include <stdio.h>
int main()
{
    int arr[100];
    int n, position;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position: ");
    scanf("%d", &position);
    if (position > n || position < 0)
    {
        printf("Invalid position");
    }
    else
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}