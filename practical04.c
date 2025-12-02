#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("enter the value of a and b :");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping");
    printf("the value of a is : %d and the value of b is %d", a, b);

    return 0;
}
