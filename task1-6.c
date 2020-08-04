#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x,y;
    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);
    if((y<=2*(x+1.5)) && (y>=0.25*(x-2)) && (y<=(-1*(x-2))/3))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    
    system("pause");
    return 0;
}