#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char firstName[30];
    printf("Enter your first name: \n");
    scanf("%s", firstName);
    printf("Hello %s", firstName);
    return 0;

}


