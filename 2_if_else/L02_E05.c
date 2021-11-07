/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

5 - Faça um algoritmo que peça uma senha (apenas numérica). 
Em seguida, o algoritmo deve pedir a  confirmação da senha. Se a senha 
repetida for igual à original, apresentar a mensagem “Senha criada com sucesso”. 
Do contrário, apresentar a mensagem “senha não confere”.
*/

#include <stdio.h>

main() {

    int senha_1, senha_2; 

    printf("Digite uma senha numérica: ");
    scanf("%d", &senha_1); 
    
    printf("Digite novamente a senha: ");
    scanf("%d", &senha_2); 

    if (senha_1 == senha_2) {
        printf("Senha criada com sucesso\n"); 
    }
    else {
        printf("Senha não confere\n");
    }
    return(0);
}