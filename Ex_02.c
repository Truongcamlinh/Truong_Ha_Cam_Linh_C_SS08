#include <stdio.h>

int main()
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2; ++j)
            if (a[i][j] == n)
            {
                printf("Vi tri phan tu trong mang la a[%d][%d].", i, j);
                return 0;
            }
    }
    printf("Phan tu khong ton tai trong mang.");
    return 0;
}