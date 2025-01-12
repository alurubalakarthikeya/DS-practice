#include <stdio.h>
#include <stdlib.h>
int *returnArray(int *n)
{
    printf("Enter number of elements in the array: ");
    scanf("%d", n);
    int *arr1 = (int *)malloc(*n * sizeof(int));
    if (arr1 == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    for (int i = 0; i < *n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    return arr1;
}
int main()
{
    int n;
    int *arr = returnArray(&n);
    printf("The returned array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}