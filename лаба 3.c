#include <stdio.h>

int main() {
    float perimeter, side;

    // �������� � ����������� �������� ��������
    printf("������ �������� ��������: ");
    scanf("%f", &perimeter);

    // ���������� ������� ������� ��������
    side = perimeter / 4;

    // �������� ��������� �� �����
    printf("������� ������� ��������: %.2f\n", side);

    return 0;
}
