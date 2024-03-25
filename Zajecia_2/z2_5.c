#include <stdio.h>
#include <string.h>

#define MAX_KONTAKTY 100

struct Contact {
    char imie[50];
    char nazwisko[50];
    char numer_telefonu[20];
};

void dodajKontakt(struct Contact *ksiazka_adresowa, int *liczba_kontaktow);
void znajdzKontakt(const struct Contact *ksiazka_adresowa, int liczba_kontaktow, const char *nazwisko);
void usunKontakt(struct Contact *ksiazka_adresowa, int *liczba_kontaktow, const char *nazwisko);
void wyswietlWszystkieKontakty(const struct Contact *ksiazka_adresowa, int liczba_kontaktow);

int main() {
    struct Contact ksiazka_adresowa[MAX_KONTAKTY];
    int liczba_kontaktow = 0;

    char wybor;
    char nazwisko[50];

    do {
        printf("\nMenu:\n");
        printf("1. Dodaj kontakt\n");
        printf("2. Znajdź kontakt po nazwisku\n");
        printf("3. Usuń kontakt po nazwisku\n");
        printf("4. Wyświetl wszystkie kontakty\n");
        printf("5. Wyjście\n");
        printf("Wybierz opcję: ");
        scanf(" %c", &wybor);

        switch (wybor) {
            case '1':
                dodajKontakt(ksiazka_adresowa, &liczba_kontaktow);
                break;
            case '2':
                printf("Podaj nazwisko do wyszukania: ");
                scanf("%s", nazwisko);
                znajdzKontakt(ksiazka_adresowa, liczba_kontaktow, nazwisko);
                break;
            case '3':
                printf("Podaj nazwisko do usunięcia: ");
                scanf("%s", nazwisko);
                usunKontakt(ksiazka_adresowa, &liczba_kontaktow, nazwisko);
                break;
            case '4':
                wyswietlWszystkieKontakty(ksiazka_adresowa, liczba_kontaktow);
                break;
            case '5':
                printf("Wyjście z programu.\n");
                break;
            default:
                printf("Nieprawidłowa opcja.\n");
        }
    } while (wybor != '5');

    return 0;
}

void dodajKontakt(struct Contact *ksiazka_adresowa, int *liczba_kontaktow) {
    if (*liczba_kontaktow < MAX_KONTAKTY) {
        printf("Podaj imię: ");
        scanf("%s", ksiazka_adresowa[*liczba_kontaktow].imie);
        printf("Podaj nazwisko: ");
        scanf("%s", ksiazka_adresowa[*liczba_kontaktow].nazwisko);
        printf("Podaj numer telefonu: ");
        scanf("%s", ksiazka_adresowa[*liczba_kontaktow].numer_telefonu);
        (*liczba_kontaktow)++;
        printf("Kontakt dodany pomyślnie.\n");
    } else {
        printf("Książka adresowa jest pełna. Nie można dodać kolejnego kontaktu.\n");
    }
}

void znajdzKontakt(const struct Contact *ksiazka_adresowa, int liczba_kontaktow, const char *nazwisko) {
    int znaleziono = 0;
    for (int i = 0; i < liczba_kontaktow; i++) {
        if (strcmp(ksiazka_adresowa[i].nazwisko, nazwisko) == 0) {
            printf("Znaleziono kontakt:\n");
            printf("Imię: %s\n", ksiazka_adresowa[i].imie);
            printf("Nazwisko: %s\n", ksiazka_adresowa[i].nazwisko);
            printf("Numer telefonu: %s\n", ksiazka_adresowa[i].numer_telefonu);
            znaleziono = 1;
        }
    }
    if (!znaleziono) {
        printf("Nie znaleziono kontaktu o podanym nazwisku.\n");
    }
}

void usunKontakt(struct Contact *ksiazka_adresowa, int *liczba_kontaktow, const char *nazwisko) {
    int znaleziono = 0;
    for (int i = 0; i < *liczba_kontaktow; i++) {
        if (strcmp(ksiazka_adresowa[i].nazwisko, nazwisko) == 0) {
            for (int j = i; j < *liczba_kontaktow - 1; j++) {
                ksiazka_adresowa[j] = ksiazka_adresowa[j + 1];
            }
            (*liczba_kontaktow)--;
            znaleziono = 1;
            printf("Kontakt usunięty pomyślnie.\n");
            break;
        }
    }
    if (!znaleziono) {
        printf("Nie znaleziono kontaktu o podanym nazwisku.\n");
    }
}

void wyswietlWszystkieKontakty(const struct Contact *ksiazka_adresowa, int liczba_kontaktow) {
    if (liczba_kontaktow == 0) {
        printf("Książka adresowa jest pusta.\n");
    } else {
        printf("Wszystkie kontakty w książce adresowej:\n");
        for (int i = 0; i < liczba_kontaktow; i++) {
            printf("Kontakt %d:\n", i + 1);
            printf("Imię: %s\n", ksiazka_adresowa[i].imie);
            printf("Nazwisko: %s\n", ksiazka_adresowa[i].nazwisko);
            printf("Numer telefonu: %s\n", ksiazka_adresowa[i].numer_telefonu);
        }
    }
}
