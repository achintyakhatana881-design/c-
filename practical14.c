#include <stdio.h>

int isprime(int n)
{
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main()
{
    int n;
    printf("enter number :");
    scanf("%d", &n);
    if (isprime(n))
        printf("prime number");
    else
        printf("not prime");
    return 0;
}