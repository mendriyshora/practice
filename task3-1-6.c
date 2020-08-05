
#include <stdio.h>
#include <locale.h>
#include <math.h>
 
int main()
{
    setlocale(LC_ALL, "");
    int ar[6][4];
    int mi = 0;
    int mj = 0;
 
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("[%d][%d] - ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
 
            if(abs(ar[i][j]) > abs(ar[mi][mj]))
            {
                mi = i;
                mj = j;
            }
        }
    }
 
    printf("Mass:\n");
 
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d\t", ar[i][j]);
        printf("\n");
    }
 
    printf("max chuslo = %d\n", ar[mi][mj]);
    printf("ryadok %d, stovpchuk %d.\n", mi + 1, mj + 1);
    getchar();
    return 0;
}
