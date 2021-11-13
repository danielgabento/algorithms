/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2. Faça um programa que peça para o usuário digitar um número inferior a 1 ou superior a 6. Se
o valor digitado estiver correto, apresentar a mensagem “Valor digitado com sucesso”. Do
contrário, apresentar a mensagem “Valor não pode estar entre 1 e 6”.
*/

#include <stdio.h>

int main() {

    int NUM;

    printf("Digite um número inferior a 1 ou superior a 6: ");
    scanf("%d", &NUM);

    if((NUM < 1) || (NUM > 6))
    {
        printf("Valor digitado com sucesso\n");
    }
    else 
    {
        printf("Valor não pode estar entre 1 e 6\n");
    }
    return(0);
}