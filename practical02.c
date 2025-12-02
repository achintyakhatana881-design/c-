#include<stdio.h>

int main(){
    int cmarks,genAimarks,sum;
    printf("enter the marks of the subject\n");
    scanf("%d %d",&cmarks,&genAimarks);
    sum = cmarks+genAimarks;
    printf("the sum of %d and %d is %d", cmarks,genAimarks,sum);

    return 0;
}