/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6 - Faça um algoritmo que peça uma nota N1 e, em seguida, uma nota N2. O algoritmo deve
calcular a média das duas notas e apresentar a mensagem “Aprovado”, caso o resultado seja
maior ou igual a 6; ou “Reprovado”, caso o resultado seja inferior a 6.
*/

#include <stdio.h>

main() {

    int nota_1, nota_2, media; 

    printf("Digite a nota N1: ");
    scanf("%d", &nota_1); 
    
    printf("Digite a nota N2: ");
    scanf("%d", &nota_2); 

    media = ((nota_1 + nota_2) / 2);

    if (media >= 6) {
        printf("Aprovado\n"); 
    }
    else {
        printf("Reprovado\n");
    }
    return(0);
}