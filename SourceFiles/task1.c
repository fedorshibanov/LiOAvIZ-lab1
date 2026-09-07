#include <stdio.h>

int main()
{
    int a[10] = {5, 3, 9, 1, 7, 2, 8, 0, 6, 4};
    int n = 10;
    int max = a[0], min = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("Max = %d, Min = %d\n", max, min);
    printf("Diff = %d\n", max - min);

    return 0;
}
