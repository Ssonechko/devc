#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    // Запитуємо в користувача час в секундах
    printf("Введіть час в секундах: ");
    scanf("%d", &seconds);

    // Обчислюємо кількість годин, хвилин та залишок секунд
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    // Виводимо результат на екран
    if (hours > 0) {
        printf("Час: %d годин, %d хвилин, %d секунд\n", hours, minutes, seconds);
    } else if (minutes > 0) {
        printf("Час: %d хвилин, %d секунд\n", minutes, seconds);
    } else {
        printf("Час: %d секунд\n", seconds);
    }

    return 0;
}
