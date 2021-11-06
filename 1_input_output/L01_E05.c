/* 
..Universidaderia Tecnológica Federal do Paraná - UTFPR
..Engenha de Software

5 - Faça um algoritmo que peça a idade do usuário e, 
em seguida, digite a mensagem: “Legal! Você tem <idade> anos!”
*/

#include <stdio.h>

main() {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Legal! Você têm %d anos!\n", idade);
    return(0);
}