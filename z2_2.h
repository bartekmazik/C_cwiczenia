#include <stdlib.h>
#include <stdio.h>
void podwoj(float *ptr) {
    *ptr *= 2;
}
void z2_2()
{
    float zmienna = 5.5;
    printf("Wartość zmiennej przed modyfikacją: %.2f\n", zmienna);

    podwoj(&zmienna);

    printf("Wartość zmiennej po modyfikacji: %.2f\n", zmienna);
}



