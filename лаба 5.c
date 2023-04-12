#include <stdio.h>

int main() {
    float num, sum = 0, count = 0, min, max;
    printf("Введіть послідовність дійсних чисел (введіть 0, щоб завершити): ");
    scanf("%f", &num);
    min = num;
    max = num;
    // цикл для обчислення суми та кількості чисел в послідовності
    while (num != 0) {
        sum += num;
        count++;
         // перевірка, чи поточне число є мінімальним або максимальним
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
        scanf("%f", &num);
    }
   // перевірка, чи було введено хоча б одне число
    if (count > 0) {
        printf(" Середнє арифметичне число: %.2f\n", sum / count);
        printf("Найбільше число: %.2f\n", max);
        printf("Найменше число: %.2f\n", min);

    } else {
        printf(".");
    }
    return 0;
}




