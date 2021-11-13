/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1. Faça um programa que peça para o usuário digitar um número entre 1 e 6 (inclusive). Se o
valor digitado estiver no intervalo, apresentar a mensagem “Valor digitado com sucesso”. Do
contrário, apresentar a mensagem “Valor fora do intervalo permitido”.
*/

#include <stdio.h>

int main() {

    int NUM;

    printf("Digite um número entre 1 e 6: ");
    scanf("%d", &NUM);

    if((NUM >= 1) && (NUM <= 6))
    {
        printf("Valor digitado com sucesso\n");
    }
    else 
    {
        printf("Valor fora do intervalo permitido\n");
    }
    return(0);
}