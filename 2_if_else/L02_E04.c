/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4 - Faça um algoritmo que peça uma senha (apenas numérica). Se a senha for diferente de
123456, apresentar a mensagem “senha não confere!”.
*/

#include <stdio.h>

main() {

    int senha; 

    printf("Digite uma senha numérica: ");
    scanf("%d", &senha); 
    
    if (senha != 123456) {
        printf("Senha não confere\n"); 
    }
    return(0);
}