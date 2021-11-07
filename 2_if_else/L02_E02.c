/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2 - Faça um algoritmo que peça o salário de um funcionário. Se o salário for menor do que R$ 1.045, 
o algoritmo deve apresentar a mensagem “você ganha menos do que um salário mínimo”. Do contrário, 
o algoritmo deve apresentar a mensagem “você ganha pelo menos um salário mínimo”.
*/

#include <stdio.h>

main() {

    int S; 

    printf("Digite seu salário: ");
    scanf("%d", &S); 
    
    if (S < 1045) {
        printf("Você ganha menos que um salário mínimo\n"); 
    }
    else {
        printf("Você ganha pelo menos um salário mínimo\n");
    }
    return(0);
}