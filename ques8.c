#include <stdio.h>
void add_matrices(int *matrix1, int *matrix2, int *result, int rows, int cols);
int main() {
    int rows, cols;
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
    printf("Enter elements of matrix1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of matrix2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    add_matrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void add_matrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows * cols; i++) {
        *(result + i) = *(matrix1 + i) + *(matrix2 + i);
    }
}