#include <stdio.h>
#include <string.h>

// ��������� �����
struct Country {
    char name[50]; // �����
    char capital[50]; // �������
    int population; // ʳ������ ���������
    float area; // �����
    int numCities; // ʳ������ ���
};

int main() {
    struct Country countries[100]; // ��������� ����� ����
    int n; // ʳ������ ����
    printf("������ ������� ����: ");
    scanf("%d", &n);

    // ������� ��� ��� �����
    for (int i = 0; i < n; i++) {
        printf("\n������ ��� ��� ����� #%d:\n", i+1);
        printf("�����: ");
        scanf("%s", countries[i].name);
        printf("�������: ");
        scanf("%s", countries[i].capital);
        printf("ʳ������ ���������: ");
        scanf("%d", &countries[i].population);
        printf("�����: ");
        scanf("%f", &countries[i].area);
        printf("ʳ������ ���: ");
        scanf("%d", &countries[i].numCities);
    }

    // ������� ����� �� ������� ���������
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (countries[i].population > countries[j].population) {
                // ̳����� ������ ��������, ���� �������
                struct Country temp = countries[i];
                countries[i] = countries[j];
                countries[j] = temp;
            }
        }
    }

    // �������� ��� ��� ����� � ������� ��������� ������� ���������
    printf("\n��� ��� ����� � ������� ��������� ������� ���������:\n");
    for (int i = 0; i < n; i++) {
        printf("\n����� #%d:\n", i+1);
        printf("�����: %s\n", countries[i].name);
        printf("�������: %s\n", countries[i].capital);
        printf("ʳ������ ���������: %d\n", countries[i].population);
        printf("�����: %.2f\n", countries[i].area);
        printf("ʳ������ ���: %d\n", countries[i].numCities);
    }

    return 0;
}
