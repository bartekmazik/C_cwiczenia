#include <stdio.h>

struct Point {
    int x;
    int y;
};

void zmienWspolrzedne(struct Point *ptr, int newX, int newY) {
    ptr->x = newX;
    ptr->y = newY;
}

struct Rectangle {
    struct Point topleft;
    struct Point bottomright;
};

int poleProstokata(struct Rectangle *ptr) {
    int szerokosc = ptr->bottomright.x - ptr->topleft.x;
    int wysokosc = ptr->topleft.y - ptr->bottomright.y;
    return szerokosc * wysokosc;
}

int z2_3() {
    struct Point punkt = {3, 4};
    printf("Początkowe współrzędne punktu: (%d, %d)\n", punkt.x, punkt.y);
    zmienWspolrzedne(&punkt, 7, 9);
    printf("Zmienione współrzędne punktu: (%d, %d)\n", punkt.x, punkt.y);

    struct Rectangle prostokat = {{2, 5}, {8, 3}};
    printf("Pole prostokąta: %d\n", poleProstokata(&prostokat));

    return 0;
}
