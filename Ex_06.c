#include <stdio.h>

int main()
{
    int a[4][4] = {{3, 7, 1, 5},
                   {8, 2, 6, 4},
                   {11, 15, 9, 13},
                   {14, 10, 12, 16}};

    int sum = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum += *(*(a + i) + i);
        printf("%3d", a[i][i]);
    }
    printf("\n%d", sum);
}