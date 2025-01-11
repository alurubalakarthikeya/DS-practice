#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of cols in the matrix: ");
    scanf("%d", &cols);
    int sparseOrNot[rows][cols];
    int totalCount =rows*cols;
    printf("Enter the elements for the sparse matrix: \n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("sparseOrNot[%d][%d]: ", i,j);
            scanf("%d", &sparseOrNot[i][j]);
        }
    }
    int zeroCounter =0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(sparseOrNot[i][j]==0){
                zeroCounter++;
            }
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            printf("%d\t", sparseOrNot[i][j]);
        }
        printf("\n");
    }
    if(zeroCounter > (totalCount/2)){
        printf("This is a sparse matrix!");
    }
    else {
        printf("This ain't a sparse matrix!");
    }
    return 0;
}