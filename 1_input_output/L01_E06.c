/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6 - Faça um algoritmo que peça o nome do usuário, depois a idade do usuário e, em seguida,  
digite a mensagem: “Legal, <nome do usuário>! Você tem <idade> anos!”.
*/

#include <stdio.h>

main() {

    int idade;
    char nome[10];

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Legal, %s! Você têm %d anos!\n", nome, idade);
    return(0);
}