#include <stdio.h>
#include <math.h>


int main() {
    int choice = 0;
    float pounds = 0.0;
    float kgs = 0.0;

    printf("Weight Conversion Calculator: \n");
    printf("1. Kg to Pounds\n");
    printf("2. Pounds to Kg\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        // Kg => Pounds
        printf("Enter your kg Weight: ");
        scanf("%f", &kgs);
        pounds = kgs * 2.20462;
        printf("Your weight in pounds is %.2f", pounds);

    }
    else if(choice == 2) {
        // Pounds => Kg
        printf("Enter your pounds Weight: ");
        scanf("%f", &pounds);
        kgs = pounds/2.20462;
        printf("Your weight in kilograms is %.2f", kgs);

    }
    else {
        // invalid choice
        printf("Invalid Choice");
    }

    

    
    
    return 0;
}