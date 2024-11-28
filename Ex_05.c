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
        for (int j = 0; j < 4; ++j)
        {
            if (i == 0 || i == 3 || j == 0 || j == 3)
                sum += a[i][j];
        }
    }
    printf("%d", sum);
}
