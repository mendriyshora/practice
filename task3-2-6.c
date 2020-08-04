#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Сформувати масив з добуткiв вiд'ємних елементiв кожного стовпчика 
заданої матрицi F(5,5). В одновимiрному масивi знайти мiнiмальний елемент та його iндекс. Вивести вихiдний і створений масиви, мiнiмальний елемент та його iндекс.       
*/
int MIN_(int *a, int col)
{int min = a[0];
    for (int i = 0; i < col; i++)
    {
        min = (min > a[i])? a[i]:min;
    }
    return min;
}
int main()
{
    int row, col;
    printf("Enter row ");
    scanf("%d", &row);
    printf("Enter col ");
    scanf("%d", &col);
    int f[row][col], a[col];
    srand(time(NULL));
    for (int i = 0; i < row; i++, printf("\n"))
    {
        for (int j = 0; j < col; j++)
        {
            f[i][j] = rand() % 20 - 10;
            printf("\t%d", f[i][j]);
        }
    }
    int  dob = 1;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            if (f[i][j] < 0)
            {
                dob *= f[i][j];
            }
        }
        a[j] = dob;
        dob = 1;
    }printf("\na:\n");
    for (int i = 0; i < col; i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n min = %d\n", MIN_(a, col));
    system("pause");
    return 0;
}
