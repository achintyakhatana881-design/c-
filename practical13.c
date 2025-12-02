#include <stdio.h>

int main()
{
    int a[50], n, i, max;
    printf("enter size :");
    scanf("%d", &n);

    printf("enter array elements :");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    printf("largest = %d" ,max);

    return 0;
}