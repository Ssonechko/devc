#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введіть три числа:: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d найбільше", a);
    } else if (b > a && b > c) {
        printf("%d найбільше", b);
    } else {
        printf("%d найбільше", c);
    }
    return 0;
}


