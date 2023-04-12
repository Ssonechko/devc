#include <stdio.h>
#define ROWS 3
#define COLS 4

int main()
{
    int matrix[ROWS][COLS] = {{3, 1, 4, 2},
                              {8, 6, 7, 5},
                              {11, 9, 12, 10}}; // двовимірний масив
    int min = matrix[0][0]; // початкове значення мінімуму
    int max = matrix[0][0]; // початкове значення максимуму
    int i, j; // індекси для ітерації по масиву

    //знаходимо мінімальний та максимальний елементи
    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // виводимо результати
    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);

    return 0;
}
