#include <stdio.h>

void z3_1(int N) {
    int trojkat[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                trojkat[i][j] = 1;
            else
                trojkat[i][j] = trojkat[i - 1][j - 1] + trojkat[i - 1][j];
            printf("%d ", trojkat[i][j]);
        }
        printf("\n");
    }
}

