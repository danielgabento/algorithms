/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

7 - Faça um algoritmo que peça a idade do usuário, depois o ano de nascimento do usuário,  
e apresente a mensagem: “Você tem <idade> anos e nasceu em <ano de nascimento>!”
*/

#include <stdio.h>

main() {

    int idade, ano;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    printf("Você tem %d anos e nasceu em %d\n", idade, ano);
    return(0);
}