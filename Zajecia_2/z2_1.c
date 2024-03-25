#include <stdlib.h>
#include <stdio.h>

void main()
{
    int i = 1;
    int *ptr;
    ptr = &i;
    printf("Wartość i: %d \n", i);
    printf("Wskażnik do i: %d \n", *ptr);
    *ptr = i+1;
    printf("Wskażnik do i: %d\n", *ptr);
    *ptr = 10;
    printf("Wartość i: %d \n", i);
    printf("Wartość i: %d \n", *ptr);
}



