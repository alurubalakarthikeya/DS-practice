#include <stdio.h>
int main()
{
    int arr[100];
    int n, element, position;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Entert the element: ");
    scanf("%d", &element);
    printf("Enter the position: ");
    scanf("%d", &position);
    if (position > n || position < 0)
    {
        printf("Invalid position!");
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
            printf("%d", arr[i]);
        }
    }
}