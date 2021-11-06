/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

9 - Faça um algoritmo que peça a idade do usuário e apresente seu provável ano de nascimento.
*/

#include <stdio.h>

main() {

    int idade, ano;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    ano = (2021 - idade);
    printf("Seu provável ano de nascimento é %d\n", ano);
    return(0);
}