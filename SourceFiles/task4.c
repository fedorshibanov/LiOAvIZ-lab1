#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rows, cols;

    printf("enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int **a = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
        a[i] = (int *)malloc(cols * sizeof(int));

    srand(time(NULL));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            a[i][j] = rand() % 51 - 40;

    printf("matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%4d ", a[i][j]);
        printf("\n");
    }

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

    int diag_len = rows < cols ? rows : cols;
    int diag_sum = 0;
    for (int i = 0; i < diag_len; i++)
        diag_sum += a[i][i];
    printf("main diagonal sum = %d\n", diag_sum);

    for (int i = 0; i < rows; i++)
        free(a[i]);
    free(a);

    return 0;
}
