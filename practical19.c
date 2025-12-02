#include <stdio.h>

int main()
{
    float a;
    printf("Enter a floating point value: ");
    scanf("%f", &a);

    int x = (int)a;

    printf("Float = %f and after conversion into int = %d\n", a, x);

    return 0;
}
