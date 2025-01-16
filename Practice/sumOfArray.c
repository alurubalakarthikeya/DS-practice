/*Write a C program with the following constraints.
i. Initialize an integer array in main() function.
ii. Pass the array to a b. the elements. function called addition() and add all
iii. The addition() function should return an back to the main() integer value function.
 iv. Print the sum in the main() function*/
#include <stdio.h>
int addition(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int arr[100];
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = addition(arr, n);
    printf("Sum of the array elements is: %d", sum);
    return 0;
}