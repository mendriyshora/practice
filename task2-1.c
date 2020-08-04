#include <stdio.h>
#define N 11
int main (void)
{
    int a[N], i, s;
	srand(time(NULL));
    for (s=i=0; i<N; i++)
    {
        a[i] = rand()%100;
        printf("%3d", a[i]);
		if (a[i]%2 == 0) s += a[i];
}
    printf("\n sum = %i\n", s);
    return 0;
}
