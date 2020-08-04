#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*6.	Дано дійсну матрицю А розмірності nxm. Знайти суму найбільших елементів її рядків.
Вхідні дані: n = 3; m = 4;  
*/
int main()
{
    int n, m;
    printf("Enter n ");
    scanf("%d", &n);
    printf("Enter m ");
    scanf("%d", &m);
    int s = 0, max;
    int col = m, row = n;
    int a[row][col], f = 0;
    srand(time(NULL));
    for (int i = 0; i < row; i++, printf("\n"))
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 20 - 10;
            printf("\t%d", a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            max = (max < a[i][j]) ? a[i][j] : max;
        }
        s += max;
        max = 0;
    }
printf("sum = %d\n", s);
    system("pause");
    return 0;
}