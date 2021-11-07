/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

10 - Faça um programa que peça um número inteiro e apresente a mensagem “é par” ou “é
ímpar”. Dica: use o operador %. Este operador retorna o resto de uma divisão. Por exemplo:
5%2 retornará o resto da divisão de 5 por 2. Então, 5%2=1 (porque 5 dividido por 2 é igual 
a 2 e resta 1). Por outro lado, 6%2=0, porque 6 dividido por 2 é igual a 3 e resta 0.
*/

#include <stdio.h>

int main() {

    int valor_1;

    printf("Informe um número inteiro qualquer e direi se ele é par ou ímpar: ");
    scanf("%d", &valor_1); 

    if ((valor_1 % 2) == 0) {
        printf("O valor %d informado é um número par\n", valor_1); 
    }
    else {
        printf("O valor %d informado é um número ímpar\n", valor_1); 
    }    
    return(0);
}