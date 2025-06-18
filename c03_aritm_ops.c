#include <stdio.h>

int main() {
    // operações aritméticas

    int x1 = 10;
    int y1 = 3;
    int z1 = 0;

    z1 = x1 + y1;  // + - *

    /*
    Divisão usa /
    Divisões por integers não armazenam parte decimal
    Para manter a parte decimal precisa dividir por decimal
    */
    
    z1 = x1 % y1; // resto da divisão
    z1++; // incremento e decremento (z1--)
    z1 += 3; // -= *= /=
    printf("%d", z1); 

    return 0;
}