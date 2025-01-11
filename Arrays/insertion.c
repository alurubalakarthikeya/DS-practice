#include <stdio.h>
int main()
{
    int arr[100];
    int n, element, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d", &position);
    if (position > n || position < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (int i = n; i > position; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        n++;
        printf("Array after insertion: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}