#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
/*6.	Дано основи і висоти двох рівнобедрених трапецій. Знайти суми їх периметрів. Знаходження периметру трапеції реалізувати за допомогою функції.
Вхідні дані:  a1 = 4, b1 = 6, h1 = 5, a2 = 3, b2 = 7, h2 = 4.
Вихідні дані: P1 = 20,2, P2 = 18,94.
*/
typedef struct
{
    int a1, a2, h;
    float b, p;
} trap;
int main()
{
    int n;
    printf("Enter no of figures ");
    scanf("%d",&n);
    trap *a;
    a = (trap*)calloc(n,sizeof(trap));
    for (int i = 0; i < n; i++)
    {
        printf("figure #%d", i+1);
        printf("Enter a(a<a1) ");
        scanf("%d",&a[i].a1);
        printf("Enter a1 ");
        scanf("%d",&a[i].a2);
        printf("Enter h1 ");
        scanf("%d",&a[i].h);
        float ab;
        ab = (a[i].a2 - a[i].a1)/2; 
        a[i].b = sqrt(ab*ab + a[i].h*(a[i].h));
        a[i].p = a[i].a1 + a[i].a2 + 2*(a[i].b);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nP%d = %f", i+1,a[i].p);
    }
    
    system("pause");
    return 0;
}