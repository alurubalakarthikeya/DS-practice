#include <stdio.h>
int main()
{
    int arr[100];
    int n, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            found = 1;
            printf("The element is found at the index %d", i);
            break;
        }
    }
    if (!found)
    {
        printf("Element not found");
    }
    return 0;
}