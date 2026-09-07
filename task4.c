#include <stdio.h>

int main()
{
    int a[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int rows = 2, cols = 5;

    printf("cols sum:\n");
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
            sum += a[i][j];
        printf("col %d: sum = %d\n", j, sum);
    }

    printf("rows sum:\n");
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
            sum += a[i][j];
        printf("row %d: sum = %d\n", i, sum);
    }

    return 0;
}
