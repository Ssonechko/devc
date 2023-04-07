#include <stdio.h>

int main() {
    int a, b, c;
    printf("Âגוה³עü ענט קטסכא: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("%d םאיב³כüרו", a);
    } else if (b > a && b > c) {
        printf("%d םאיב³כüרו", b);
    } else {
        printf("%d םאיב³כüרו", c);
    }
    return 0;
}


