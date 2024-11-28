#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            a[i][j] = i * n + j + 1;
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}