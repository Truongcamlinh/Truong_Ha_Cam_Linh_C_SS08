#include <stdio.h>

int main()
{
    int a[3][2] = {8, 3, 10, 4, 5, 110};

    int max = a[0][0];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            if (a[i][j] > max)
                max = a[i][j];
    }
    printf("%d", max);
}