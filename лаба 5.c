#include <stdio.h>

int main() {
    float num, sum = 0, count = 0, min, max;
    printf("������ ����������� ������ ����� (������ 0, ��� ���������): ");
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
        printf(" ������ ����������� �����: %.2f\n", sum / count);
        printf("�������� �����: %.2f\n", max);
        printf("�������� �����: %.2f\n", min);
    } else {
        printf(".");
    }
    return 0;
}




