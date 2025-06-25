#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator:\n");
    
    printf("\nEnter the principal: ");
    scanf("%lf", &principal);

    printf("\nEnter the rate: ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("\nEnter the years: ");
    scanf("%d", &years);

    printf("\nEnter the times compounded: ");
    scanf("%d", &times_compounded);

    total = principal * pow((1 + rate/times_compounded),times_compounded*years);
    printf("After %d years , compounded %d time/s, the total will be $%.2lf", years, times_compounded, total);

    return 0;
}