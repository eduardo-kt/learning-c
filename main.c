#include <stdio.h>
#include <stdbool.h>

int main() { // ponto de entrada compilador C

    // para lançar comentários de linha única

    printf("Hello World\n"); // para projetar na tela

        
    /*
    Comentário de múltiplas linhas
    Segunda linha de comentário
    */
    
    // declarar variáveis
    int idade = 25; // usa 4 bytes em sistemas modernos
    int ano = 2025;
    float saldo = 19.75; // usa 4 bytes

    printf("Em %d voce tinha %d anos e saldo %.2f\n", ano, idade, saldo);

    double pi = 3.14159265; // double é decimal com grande precisão usa 8 bytes
    printf("O numero pi: %.15lf\n", pi);

    char nota = 'A'; // caracteres usa 'single quotes' usa 1 byte
    printf("Nota final %c\n", nota);

    
    // A linguagem C não possui string. String é um array de chars
    
    char string[] = "Este eh um array de chars"; // usa double quotes
    printf("%s\n", string);

    char email[] = "eduardo124@gmail.com"; // tamanho varia
    printf("%s\n", email);

    // para criar booleano #include <stdbool.h> no escopo
    bool isOn = true;  // poderia lançar true ==1 ou false == 0
    printf("Esta logado: %d\n", isOn); // booleano == 1 se True

    bool isStudent = false; // usa 1 byte
    
    if (isStudent) {
        printf("Eh um aluno\n");
    } else {
        printf("Nao eh aluno\n");
    }

    // format specifier
    int n1 = 1;    
    
    printf("%4d\n", n1); // identa 4 casas para direita
    printf("%05d\n", n1);  // identa 5 casas para direita preenchendo com zeros
    printf("%-1d\n", n1); // identa 1 casa para esquerda
    printf("%+05d\n", n1); // especifica que o sinal do número deve aparecer

    float decimal1 = 14.078;

    printf("%+10.2f", decimal1);
    



    

    return 0; // função main retorna inteiro
}