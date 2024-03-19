#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }

    return -1;
}

void z4_2() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element %d nie został znaleziony.\n", x);
    else
        printf("Element %d został znaleziony na indeksie %d.\n", x, result);

    x = 5;
    result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element %d nie został znaleziony.\n", x);
    else
        printf("Element %d został znaleziony na indeksie %d.\n", x, result);
}


