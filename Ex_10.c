// #include <stdio.h>

// int main()
// {
//     int a[4][4] = {{1, 5, 2, 3},
//                    {23, 5, 1, 2},
//                    {1, 5, 3, 7},
//                    {6, 2, 5, 1}};

//     int count[1001] = {0},
//         maxCount = 0, n = a[0][0];
//     for (int i = 0; i < 4; ++i)
//     {
//         for (int j = 0; j < 4; ++j)
//         {
//             count[a[i][j]]++;
//         }
//     }

//     for (int i = 0; i < 4; ++i)
//     {
//         for (int j = 0; j < 4; ++j)
//             if (count[a[i][j]] > maxCount)
//             {
//                 maxCount = count[a[i][j]];
//                 n = a[i][j];
//             }
//     }
//     printf("Phan tu xuat hien nhieu nhat: %d, va so lan xuat hien %d", n, maxCount);
// }

#include <stdio.h>

int main()
{
    int a[8] = {12, 5, 17, 8, 9, 4, 11, 14};
    int count[1001] = {0};
    int n = a[0], max = 0;
    for (int i = 0; i < 8; ++i)
    {
        count[a[i]]++;
    }
    for (int i = 0; i < 8; ++i)
    {
        if (count[a[i]] > max)
        {
            max = count[a[i]];
        }
    }
    int result[4], l = 0;
    for (int i = 0; i < 8; ++i)
    {
        if (count[a[i]] == max)
        {
            result[l++] = a[i];
            count[a[i]] = 0;
        }
    }

    for (int i = 0; i < l - 1; ++i)
    {

        for (int j = i + 1; j < l; ++j)
        {
            if (result[i] > result[j])
            {
                int tmp = result[i];
                result[i] = result[j];
                result[j] = tmp;
            }
        }
    }
    for (int i = 0; i < l; ++i)
    {
        printf("%d ", result[i]);
    }
}