#include <stdio.h>
int main()
{
    int sparse[6][6] = {{0, 0, 5, 0, 7, 0},
                        {0, 6, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 9},
                        {0, 0, 7, 0, 0, 0},
                        {0, 0, 0, 8, 0, 0},
                        {0, 0, 0, 0, 9, 0}};
    int size = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (sparse[i][j] != 0)
            {
                size++;
            }
        }
    }
    int matrix[3][size];
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
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
    printf("%s %s %s\n", "Value", "Row", "Column");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t %d\t %d\t\n", matrix[0][i], matrix[1][i], matrix[2][i]);
    }
}