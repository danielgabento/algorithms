/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3. Faça um algoritmo que peça a temperatura da água de um recipiente, em Célsius. De
acordo com a temperatura, o algoritmo deve apresentar a seguinte mensagem:
a. Se for superior a 100 ºC: “A água está em estado de vapor”;
b. Se for superior a 0 ºC: “A água está em estado líquido”;
c. Se não for nenhuma das anteriores: "A água está em estado sólido"
*/

#include <stdio.h>

int main() {

    float temp;

    printf("Informe uma temperatura em Celsius: ");
    scanf("%f", &temp); 

    if (temp > 100) {
        printf("A água está em estado de vapor\n"); 
    }
    else if ((temp > 0) && (temp <= 100)) {
        printf("A água está em estado líquido\n"); 
    }  
    else {
        printf("A água está em estado sólido\n"); 
    }   
    return(0);
}