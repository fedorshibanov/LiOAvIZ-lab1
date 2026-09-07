#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10;
    int a[10];

    srand(time(NULL));

    for (int i = 0; i < n; i++)
        a[i] = rand() % 100;

    printf("Random digits array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    return 0;
}
