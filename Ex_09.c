#include <stdio.h>

int main()
{
    int a[8] = {12, 5, 17, 8, 9, 4, 11, 14};
    int count[1001] = {0}, n = a[0], maxCount = 0;
    for (int i = 0; i < 8; ++i)
    {
        count[a[i]]++;
    }

    
    for (int i = 0; i < 8; ++i)
    {
        if (count[a[i]] > maxCount)
        {
            maxCount = count[a[i]];
            n = a[i];
        }
    }
    printf("%d", n);
}