#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character :");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'z'))
    {
        printf("character is an alphabet");
    }
    else
    {
        printf("chracter is not an alphabet ");
    }
    return 0;
}