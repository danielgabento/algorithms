/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4 - Faça um algoritmo que peça o nome do usuário e,
em seguida, digite a mensagem: “Seja bem vindo, <nome do usuário>.
*/

#include <stdio.h>

main() {

    char nome[10];
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Seja bem vindo %s\n", nome);
    return(0);
}