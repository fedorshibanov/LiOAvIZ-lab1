#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *a;

    printf("Enter array size: ");
    scanf("%d", &n);

    a = (int*)malloc(n * sizeof(int));
    if (a == NULL)
    {
        printf("Error (incorrest data)\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    free(a);

    return 0;
}
