#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int grades[2][5] = { {1,2,3,4,5}, {2,3,4,5,6} };
    int i;
    int sum1 = 0;
    int sum2 = 0;
    int length = sizeof(grades[0][1]) + 1;
    for (i = 0; i < 5; i++) {
        sum1 += grades[0][i];
        sum2 += grades[1][i];
    }
    printf("%d", sum1/length);
    printf("\n");
    printf("%d", sum2/length);
    return 0;

}


