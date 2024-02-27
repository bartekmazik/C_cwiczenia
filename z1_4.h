#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int z1_4()
{
    int i;
    for (i = 0; i < 201; i++) {
        if (i%5==0) {
            printf("Foo \n");
        }
        else if (i % 7 == 0) {
            printf("Bar \n");
        }
        if (i % 5 == 0 && i % 7 == 0) {
            printf("FooBar \n");
        }
        else {
            printf("%d \n", i);
        }
    }
    return 0;

}