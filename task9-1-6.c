#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Дано масив дійсних чисел a[i], і = 1, … , n. Виділіть для нього необхідний обсяг динамічної пам'яті. 
Створити динамічний масив b[j], j = 1, … , m, в якому повинні розміщуватися елементи масиву a[i], відсортовані за зростанням. Вивільніть динамічну пам'ять.
Вхідні дані: n = 6, a[i] = {31, -6, 2, 0, 33, 6}.
Вихідні дані: b[j] = {-6, 0, 2, 6, 31, 33}.

*/
int main()
{
    int *a,*b;
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    printf("a\n");
    a = (int *) malloc(n*sizeof(int));
    b = (int *) malloc(n*sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand()%20-10;
        printf("%d ",a[i]);
        b[i] = a[i];
    }
    for (int j = n-1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if(b[i] > b[i+1])
            {
                int tmp;
                tmp = b[i];
                b[i] = b[i+1];
                b[i+1] = tmp;
            }
        }
    }
    printf("\nb\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    
    system("pause");
    return 0;
}