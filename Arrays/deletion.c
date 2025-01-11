#include <stdio.h>
int main()
{
    int arr[100];
    int n, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d", &position);
    if (position > n || position < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (int i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}