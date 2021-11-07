/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

10 - Faça um algoritmo que peça uma temperatura em graus celsius e apresente seu  
respectivo valor em farenheits. O cálculo de conversão é: F= (9*C/5) + 32.
*/

#include <stdio.h>

main() {

    float temp_C, temp_F; // tipo float devido as variáveis receberem valores reais

    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &temp_C); // %f utilizado para designar variáveis do tipo float 
    temp_F = ((9 * temp_C) / 5) + 32;
    printf("A temperatura em  farenheits é de: %.2f\n", temp_F); // %.2f mostra duas casas decimais ao chamar a variável
    return(0);
}