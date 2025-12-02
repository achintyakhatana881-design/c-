#include <stdio.h>

int main()
{
    float Cmarks, genAimarks, sum;
    printf("enter marks of subject\n");
    scanf("%f %f", &Cmarks, &genAimarks);
    sum = ((float)30.0 / 100.0) * Cmarks + ((float)70.0 / 100.0) * genAimarks;
    printf("the sum of %f and %f = %f", Cmarks, genAimarks, sum);

    return 0;
}