#include <stdio.h>
int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int sparse[rows][cols];
    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &sparse[i][j]);
        }
    }
    int size = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
            {
                size++;
            }
        }
    }
    int matrix[3][size];
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (sparse[i][j] != 0)
            {
                matrix[0][k] = sparse[i][j];
                matrix[1][k] = i;
                matrix[2][k] = j;
                k++;
            }
        }
    }
    printf("Compressed Matrix: \n");
    printf("%s\t %s\t %s\n", "Value", "Row", "Column");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t %d\t %d\t\n", matrix[0][i], matrix[1][i], matrix[2][i]);
    }
    return 0;
}