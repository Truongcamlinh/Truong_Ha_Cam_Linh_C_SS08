#include <stdio.h>

int main()
{
    int n = 4;
    int a[4][4] = {{3, 7, 1, 5},
                   {8, 2, 6, 4},
                   {11, 15, 9, 13},
                   {14, 10, 12, 16}};

    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += *(*(a + i) + i);
        printf("%3d", a[i][(n - 1) - i]);
    }
    printf("\n%d", sum);
}