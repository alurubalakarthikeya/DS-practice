#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int sparse[rows][cols];
    printf("Enter the elements for the matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }
    int nonZero = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
            {
                nonZero++;
            }
        }
    }
    int totalElements = rows * cols;
    if (nonZero < totalElements / 2)
    {
        printf("The matrix is sparse.\n");
    }
    else
    {
        printf("The matrix is not sparse.\n");
    }
}