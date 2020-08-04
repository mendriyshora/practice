#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
У частинi матрицi G(7,7), розташованій під головною діагоналлю, визначити максимальний і мінімальний елементи з 
додатних елементів. Вивести вихiдну матрицю, максимальний і мінімальний елементи з додатних елементів та їх індекси
*/
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    int min, max;
    int col = n, row = n;
    int g[row][col], f = 0;
    srand(time(NULL));
    for (int i = 0; i < row; i++, printf("\n"))
    {
        for (int j = 0; j < col; j++)
        {
            g[i][j] = rand() % 20 - 10;
            if (g[i][j] > 0 && f == 0)
            {
                if (j < i)
                {

                    min = g[i][j];
                    f = 1;
                    max = g[i][j];
                }
            }

            printf("\t%d", g[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (g[i][j] > 0)
            {
                min = (min > g[i][j]) ? g[i][j] : min;
                max = (max < g[i][j]) ? g[i][j] : max;
            }
        }
    }
    printf("\nmin = %d\nmax = %d\n", min, max);
    system("pause");
    return 0;
}