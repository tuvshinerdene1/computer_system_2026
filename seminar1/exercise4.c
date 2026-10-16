#include <stdio.h>
int main(){
    int rows, cols;

    printf ("Enter N and M");
    scanf ("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for(int i = 0; i < rows ; i++){
        for (int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSum of elements in each row:\n");
    for(int i = 0; i < rows; i ++){
        long long row_sum = 0;
        for(int j = 0 ; j < cols; j++){
            row_sum += matrix[i][j];
        }
        printf("Row %d: %lld\n", i+1, row_sum);
    }

    printf("\nSum of elements in each column:\n");
    for (int j = 0; j < cols; j++) {
        long long col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += matrix[i][i] ? matrix[i][j] : matrix[i][j];
        }
        printf("Column %d: %lld\n", j + 1, col_sum);
    }

    return 0;
}