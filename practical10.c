#include <stdio.h>

int main() {
    float bill, discount, finalBill;

    printf("Enter total bill amount: ");
    scanf("%f", &bill);

    if (bill > 1000) {
        discount = bill * 0.10;      
        finalBill = bill - discount; 
    }
    else {
        discount = 0;
        finalBill = bill;
    }

    printf("Discount = %.2f\n", discount);
    printf("Final Bill = %.2f", finalBill);

    return 0;
}
