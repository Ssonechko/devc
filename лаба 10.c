#include <stdio.h>
#include <string.h>

// Структура країни
struct Country {
    char name[50]; // Назва
    char capital[50]; // Столиця
    int population; // Кількість населення
    float area; // Площа
    int numCities; // Кількість міст
};

int main() {
    struct Country countries[100]; // Оголошуємо масив країн
    int n; // Кількість країн
    printf("Введіть кількість країн: ");
    scanf("%d", &n);

    // Вводимо дані про країни
    for (int i = 0; i < n; i++) {
        printf("\nВведіть дані про країну #%d:\n", i+1);
        printf("Назва: ");
        scanf("%s", countries[i].name);
        printf("Столиця: ");
        scanf("%s", countries[i].capital);
        printf("Кількість населення: ");
        scanf("%d", &countries[i].population);
        printf("Площа: ");
        scanf("%f", &countries[i].area);
        printf("Кількість міст: ");
        scanf("%d", &countries[i].numCities);
    }

    // Сортуємо країни за кількістю населення
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (countries[i].population > countries[j].population) {
                // Міняємо місцями елементи, якщо потрібно
                struct Country temp = countries[i];
                countries[i] = countries[j];
                countries[j] = temp;
            }
        }
    }

    // Виводимо дані про країни у порядку зростання кількості населення
    printf("\nДані про країни у порядку зростання кількості населення:\n");
    for (int i = 0; i < n; i++) {
        printf("\nКраїна #%d:\n", i+1);
        printf("Назва: %s\n", countries[i].name);
        printf("Столиця: %s\n", countries[i].capital);
        printf("Кількість населення: %d\n", countries[i].population);
        printf("Площа: %.2f\n", countries[i].area);
        printf("Кількість міст: %d\n", countries[i].numCities);
    }

    return 0;
}
