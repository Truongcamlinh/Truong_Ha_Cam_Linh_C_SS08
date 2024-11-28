#include <stdio.h>

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};

    for (int i = 2; i >= 0; --i)
    {
        for (int j = 1; j >= 0; --j)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
