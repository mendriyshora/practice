#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
bool isThreeSequence(double *ptr)
{
    return (*ptr > *(ptr + 1) && *(ptr + 1) > *(ptr + 2));
}
 
int main()
{
    unsigned n;
    scanf("%d", &n);
    srand(time(NULL));
    double *arr = (double *)malloc(n);
    for (unsigned i = 0; i < n; ++i)
        printf("%.3lf  ", (*(arr + i) = rand() % 21));
 
    unsigned count = 0;
    for (unsigned i = 0; i < n - 2; ++i)
    {
        if (isThreeSequence(arr + i))
            ++count;
    }
 
    printf("\ncount of sequences = %d", count);
 
    free(arr);
 
    return 0;
}
