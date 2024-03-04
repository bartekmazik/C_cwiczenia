#include <stdio.h>
#include <string.h>

struct Student {
    char imie[50];
    float ocena;
};

void sortujStudentow(struct Student *tablica, int rozmiar) {
    int i, j;
    struct Student temp;
    for (i = 0; i < rozmiar - 1; i++) {
        for (j = 0; j < rozmiar - 1 - i; j++) {
            if (tablica[j].ocena < tablica[j + 1].ocena) {
                temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

int z2_4() {
    struct Student lista[] = {
            {"Adam", 4.5},
            {"Ewa", 3.7},
            {"Marta", 4.2},
            {"Piotr", 5.0},
            {"Anna", 4.8}
    };
    int rozmiar = sizeof(lista) / sizeof(lista[0]);

    sortujStudentow(lista, rozmiar);

    printf("Posortowana lista studentów:\n");
    for (int i = 0; i < rozmiar; i++) {
        printf("Student: %s, Ocena: %.2f\n", lista[i].imie, lista[i].ocena);
    }

    return 0;
}
