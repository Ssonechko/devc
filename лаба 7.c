#include <stdio.h>

#define ROWS 3 // ������� ����� ������
#define COLS 4 // ������� �������� ������

int main() {
    int arr[ROWS][COLS] = {
        {3, 2, 5, 1},
        {9, 7, 8, 6},
        {12, 11, 10, 13}
    };
    int max = arr[0][0]; // ��������� �������� ������������� ��������
    int min = arr[0][0]; // ��������� �������� ���������� ��������
    int max_i = 0, max_j = 0; // ������� ������������� ��������
    int min_i = 0, min_j = 0; // ������� ���������� ��������

    // ����� ������������� �� ���������� �������� �� �� �������
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                max_i = i;
                max_j = j;
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    // ���� ����������
    printf("������������ �������: %d\n", max);
    printf("������������ ������������� ��������: [%d][%d]\n", max_i, max_j);
    printf("̳�������� �������: %d\n", min);
    printf("������������ ���������� ��������: [%d][%d]\n", min_i, min_j);

    return 0;
}
