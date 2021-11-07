/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

8 - Faça um algoritmo que peça dois valores inteiros. Em seguida, o algoritmo deve apresentar
primeiro o valor mais baixo e, depois, o valor mais alto. Observação: faça de conta que o
usuário nunca digitará o mesmo valor nas duas vezes.
*/

#include <stdio.h>

int main() {

    int valor_1, valor_2;

    printf("Digite um valor inteiro qualquer: ");
    scanf("%d", &valor_1); 
    
    printf("Digite outro inteiro qualquer: ");
    scanf("%d", &valor_2);

    if (valor_1 > valor_2) {
        printf("Valor mais baixo: %d \nValor mais alto: %d\n",valor_2, valor_1); 
    }
    else {
        printf("Valor mais baixo: %d \nValor mais alto: %d\n",valor_1, valor_2);
    }
    return(0);
}