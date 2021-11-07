/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

11 - Faça um algoritmo que peça uma temperatura em graus farenheits e apresente seu respectivo valor em celsius.  
O cálculo de conversão é: C= 5*(F-32)/9.
*/

#include <stdio.h>

main() {

    float temp_C, temp_F; // tipo float devido as variáveis receberem valores reais

    printf("Digite uma temperatura em farenheits: ");
    scanf("%f", &temp_F); // %f utilizado para designar variáveis do tipo float 
    temp_C = 5 * ((temp_F - 32) / 9);
    printf("A temperatura em  celsius é de: %.2f\n", temp_C); // %.2f mostra duas casas decimais ao chamar a variável
    return(0);
}