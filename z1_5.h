#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int z1_5()
{
    int i;
    int sum = 0;
    int size;
    printf("Wpisz liczbe: \n");
    scanf("%d", &size);
    for (i = 1; i < size; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    printf("Suma wielokrotności to: %d", sum);
    return 0;

}