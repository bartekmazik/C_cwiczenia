#include <stdio.h>

int z4_1(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * z4_1(n - 1);
}

