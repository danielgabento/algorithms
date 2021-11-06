/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

8 - Faça um algoritmo que peça o ano de nascimento do usuário e apresente sua provável idade.
*/

#include <stdio.h>

main() {

    int idade, ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    idade = (2021 - ano);
    printf("Sua provável idade é %d anos\n", idade);
    return(0);
}