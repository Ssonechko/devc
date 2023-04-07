#include <stdio.h>

int main() {
    float perimeter, side;

    // Запитуємо в користувача периметр квадрата
    printf("Введіть периметр квадрата: ");
    scanf("%f", &perimeter);

    // Обчислюємо довжину сторони квадрата
    side = perimeter / 4;

    // Виводимо результат на екран
    printf("Довжина сторони квадрата: %.2f\n", side);

    return 0;
}
