#include <stdio.h>

int main() {
    float num, sum = 0, count = 0, min, max;
    printf("Введіть послідовність дійсних чисел (введіть 0, щоб завершити): ");
    scanf("%f", &num);
    min = num;
    max = num;
    while (num != 0) {
        sum += num;
        count++;
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
        scanf("%f", &num);
    }
    if (count > 0) {
        printf(" Середнє арифметичне число: %.2f\n", sum / count);
        printf("Найбільше число: %.2f\n", max);
        printf("Найменше число: %.2f\n", min);
    } else {
        printf(".");
    }
    return 0;
}




