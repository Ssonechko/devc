#include <stdio.h>

float calculateCost(float duration) {
    float cost;
    if (duration <= 10) {
        cost = duration * 1.2;
    } else {
        cost = 10 * 1.0 + (duration - 10) * 1.0;
    }
    return cost;
}

int main() {
    float duration, cost;
    printf("������ ��������� ������� � ��������: ");
    scanf("%f", &duration);
    cost = calculateCost(duration);
    printf("������� ������� : %.2f ��� .", cost);
    return 0;
}
