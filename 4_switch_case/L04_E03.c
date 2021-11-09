/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3. Faça um algoritmo que apresente o seguinte menu:
1-Calcular a área de um retângulo;
2-Calcular a área de um círculo;
3-Calcular a área de um triângulo.
Conforme a opção, o algoritmo deverá pedir os respectivos valores (altura e largura
para retângulo, altura e base para o triângulo e raio para círculo). As fórmulas para os
respectivos cálculos são:
Área_retângulo = altura * base
Área_círculo = PI * raio 2
Área_triângulo = base * altura / 2
Por fim, deve ser apresentado o resultado.
*/

#include <stdio.h>

int main() {

    int menu;
    float alt, larg, base, raio, area; 
 
    printf("\n|||||| CALCULADORA DE ÁREA ||||||\n\n");
    printf("1 - Calcular a área de um retângulo\n");
    printf("2 - Calcular a área de um círculo\n");
    printf("3 - Calcular a área de um triângulo\n\n");
    printf(">:");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1: // a variável menu é um inteiro, os valores do case não podem estar entre aspas
        printf("Informe a altura:");
        scanf("%f", &alt);
        printf("Informe a largura:");
        scanf("%f", &larg);
        area = alt * larg;
        printf("A área do retângulo é de %.2f u.q.\n", area);
        break;
    case 2:
         printf("Informe o raio:");
        scanf("%f", &raio);
        area = (3.14 * (raio * raio));
        printf("A área do círculo é de %.2f u.q.\n", area);
        break;
    case 3:
         printf("Informe a altura:");
        scanf("%f", &alt);
        printf("Informe a base:");
        scanf("%f", &base);
        area = ((base * alt) / 2);
        printf("A área do triângulo é de %.2f u.q.\n", area);
        break;
    } 
    return(0);
}