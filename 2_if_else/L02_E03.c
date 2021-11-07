/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3 - Faça um algoritmo que peça a temperatura corporal do 
usuário. Se a temperatura for menor que 37, apresentar a mensagem 
“você está sem febre”. Do contrário, apresentar a mensagem “você está com febre!”.
*/

#include <stdio.h>

main() {

    float temp; 

    printf("Digite sua temperatura: ");
    scanf("%f", &temp); 
    
    if (temp < 37) {
        printf("Você está sem febre\n"); 
    }
    else {
        printf("Você está com febre\n");
    }
    return(0);
}