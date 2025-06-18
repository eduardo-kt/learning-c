#include <stdio.h>
#include <string.h>

int main() {

    /*
    Você pode declarar variáveis sem atribuir valor.
    Usar variável sem valor atribuído causa comportamento inesperado.
    Certifique-se de atribuir valor antes de usar.
    Boa prática: sempre atribuir valor (default == 0)
    */

    // variáveis com respectivos defaults
    int idade = 0; 
    float nota = 0.0f;
    char conceito = '\0';
    char nome[30] = ""; // tamanho 30 bytes (1 char == 1 byte)

    printf("Insira sua idade: ");
    scanf("%d", &idade); // & direciona para o endereço da memória da var1

    printf("Insira sua nota: ");
    scanf("%f", &nota);

    printf("Insira seu conceito: ");
    scanf(" %c", &conceito); // o espaço em "" é truque corrige buffer

    /*
    printf("Insira seu nome: ");
    scanf("%s", &nome); // scanf não lê white spaces
    */

    getchar();
    printf("Insira nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strlen(nome)-1] = '/0';



    printf("Hello %d %.2f %c", idade, nota, conceito);

    return 0;
}