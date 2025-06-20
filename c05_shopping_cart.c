#include <stdio.h>
#include <string.h>

int main() {
    // shopping cart
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("O que deseja comprar? \n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) -1] = '\0';

    printf("Qual o preco do item? \n");
    scanf("%f", &price);

    printf("Quantas unidades quer comprar? \n");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nVoce comprou %d %s/s\n", quantity, item);
    printf("O total eh %c%.2f", currency, total);

    return 0;

}