#include <stdio.h> //

int main() {
    char surname[20]; // ���������� ����� ��� ��������� �������
    char name[20]; // ���������� ����� ��� ��������� ����
    char patronymic[20]; // ���������� ����� ��� ��������� ��-�������

    printf("������ �������: "); // 
    scanf("%s", surname); // ����������  � ������

    printf("������ ��'�: "); // 
    scanf("%s", name); // ���������� � ������

    printf("������ ��-�������: "); //
    scanf("%s", patronymic); // ���������� � ������

    printf("%c. %c. %c.\n", surname[0], name[0], patronymic[0]); // ��������� ������� � ��������

    return 0;
}
