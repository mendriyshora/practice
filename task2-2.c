#include <stdio.h>
#define N 10
 
main() {
    int a[N], i, j, b;
    srand(time(NULL));
    for (i=0; i<N; i++) {
        a[i] = rand()%100;
        printf("%3d", a[i]);
    }
    printf("\n");
 
    for (i=0; i < N-1; i++) {
        for (j=0; j < N-i-1; j++) {
            if (a[j] < a[j+1]) {
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }
 
    for (i=0; i<N; i++)
        printf("%3d", a[i]);
    printf("\n Masuv vidsortovano");
}
