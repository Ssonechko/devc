#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    // �������� � ����������� ��� � ��������
    printf("������ ��� � ��������: ");
    scanf("%d", &seconds);

    // ���������� ������� �����, ������ �� ������� ������
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    seconds %= 60;

    // �������� ��������� �� �����
    if (hours > 0) {
        printf("���: %d �����, %d ������, %d ������\n", hours, minutes, seconds);
    } else if (minutes > 0) {
        printf("���: %d ������, %d ������\n", minutes, seconds);
    } else {
        printf("���: %d ������\n", seconds);
    }

    return 0;
}
