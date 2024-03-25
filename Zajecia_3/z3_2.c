#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;

    printf("podaj liczbę wierszy macierzy: ");
    scanf("%d", &rows);
    printf("podaj liczbę kolumn macierzy: ");
    scanf("%d", &cols);

    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("blad");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("blad");
            return 1;
        }
    }

    printf("macierz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
