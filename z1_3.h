#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int z1_3()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int length = sizeof(array)/sizeof(array[0]);
    int i;
    int result = 1;
    for (i = 0; i < length; i++) {
        result = result*array[i];
    }
    printf("%d", result);
    return 0;

}