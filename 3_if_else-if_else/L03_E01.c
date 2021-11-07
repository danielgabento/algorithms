/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1. Faça um algoritmo que peça um número inteiro. Em seguida, o algoritmo deve
apresentar uma mensagem conforme a seguinte regra:
a. Se o valor for positivo: “Valor positivo”;
b. Se o valor for negativo: “Valor negativo”;
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.
*/

#include <stdio.h>

int main() {

    int num;

    printf("Informe um número inteiro: ");
    scanf("%d", &num); 

    if (num > 0) {
        printf("Valor positivo\n"); 
    }
    else if (num < 0) {
        printf("Valor negativo\n"); 
    }  
    else {
        printf("Valor neutro\n"); 
    }   
    return(0);
}