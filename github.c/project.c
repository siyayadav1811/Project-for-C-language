#include <stdio.h>

int main() {
    float principal, rate, interest, finalAmount;
    int years, i;

    
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Interest Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter Number of Years: ");
    scanf("%d", &years);

    finalAmount = principal;

    
    for (i = 1; i <= years; i++) {
        interest = (finalAmount * rate) / 100;
        finalAmount = finalAmount + interest;

        printf("Year %d Balance: %.2f\n", i, finalAmount);
    }

    
    printf("\nFinal Balance after %d years = %.2f\n", years, finalAmount);

    return 0;
}
