#include <stdio.h>
#include <string.h>

void reverse(char str[])
{
    int i, len;
    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);  

    reverse(str);

    return 0;
}
