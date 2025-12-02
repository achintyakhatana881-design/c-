#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check vowel
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
    {
        printf("The character is a vowel");
    }
    else {
        printf("The character is not a vowel");
    }

    return 0;
}
