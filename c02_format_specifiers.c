#include <stdio.h>

int main() {
    // format specifier
    int n1 = 1;    
    
    printf("%4d\n", n1); // identa 4 casas para direita
    printf("%05d\n", n1);  // identa 5 casas para direita preenchendo com zeros
    printf("%-1d\n", n1); // identa 1 casa para esquerda
    printf("%+05d\n", n1); // especifica que o sinal do número deve aparecer

    float decimal1 = 14.078;

    printf("%+10.2f\n", decimal1);

    return 0;
}