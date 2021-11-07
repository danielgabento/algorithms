/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

9 - Em uma indústria de parafusos, um algoritmo determina se a produção está boa ou ruim.
Uma produção é ruim quando o número de parafusos com defeito for maior do que 10% do
total produzido. Faça um algoritmo que peça o número total de parafusos produzidos e, em
seguida, peça o número de parafusos com defeito. O algoritmo, então, deve calcular o limite
de peças com defeito permitidas (com base no total de peças produzidas e a porcentagem
limite) e apresentar se a produção está boa ou ruim.
*/

#include <stdio.h>

int main() {

    float parafusos_t, parafusos_d;
    float percentual_d;

    printf("Informe a quantidade total de parafusos produzida: ");
    scanf("%f", &parafusos_t); 
    
    printf("Informe a quantidade de parafusos com defeito: ");
    scanf("%f", &parafusos_d); 

    percentual_d = ((parafusos_d / parafusos_t) * 100);

    if (percentual_d > 10) {
        printf("A produção está ruim, percentual de defeitos igual a: %.2f%%\n", percentual_d); // utilizar dois %% para retonar um % em formato string
    }
    else {
        printf("A produção está boa, percentual de defeitos igual a: %.2f%%\n", percentual_d); // utilizar dois %% para retonar um % em formato string
    }
    return(0);
}