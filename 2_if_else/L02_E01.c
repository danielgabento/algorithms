/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1 - Faça um algoritmo que peça o salário de um funcionário. 
Se o salário for maior do que R$ 10.000, o programa deverá apresentar a mensagem “você ganha bem!”
*/

#include <stdio.h>

main() {

    int S; 

    printf("Digite seu salário: ");
    scanf("%d", &S); 
    
    if (S > 10000) {
        printf("Você ganha bem!\n");
    }
    return(0);
}