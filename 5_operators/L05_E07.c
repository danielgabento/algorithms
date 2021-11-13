/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

7. Faça um programa que apresente o menu:
1- Conversão de temperatura
2-Conversão de distância
Se o usuário escolher a opção 1, apresentar o menu:
1-Converter Celsius para Farenheit
2- Converter Farenheit para Celsius
3-Converter Celsius para Kelvin
O programa deverá, então, pedir uma temperatura, realizar a conversão escolhida e
apresentar a mensagem com o valor convertido.
Se o usuário escolher a opção 2 do primeiro menu, conversão da distância, apresentar o menu:
1-Converter km para milhas
2-Converter milhas para km
Então, o programa deverá realizar a respectiva conversão e apresentar a mensagem com
o valor convertido.
Os cálculos para conversão são:
• Farenheit = (9*Celsius/5) + 32
• Celsius = 5*(Farenheit-32)/9
• Kelvin = Celsius + 273
• Milha = km * 0.62137
• Km = milha / 0.62137
*/

#include <stdio.h>

int main() {

    int MENU_1, MENU_2, MENU_3;
    float TEMP_K, TEMP_C, TEMP_F, KM, MILHAS; 
    TEMP_F = 0;
    TEMP_C = 0;
    TEMP_F = 0;
    KM = 0;
    MILHAS = 0;

    printf("\n||||| CALCULADORA DE CONVERSÃO DE MEDIDAS |||||\n\n");
    printf("Escolha uma opção:\n");
    printf("1 - Conversão de temperatura\n");
    printf("2 - Conversão de distância\n");
    printf(">: ");
    scanf("%d", &MENU_1);


    if(MENU_1 == 1)
    {
        printf("1 - Converter Celsius para Farenheit\n");
        printf("2 - Converter Farenheit para Celsius\n");
        printf("3 - Converter Celsius para Kelvin\n");
        printf(">: ");
        scanf("%d", &MENU_2);

        if(MENU_2 == 1)
        {
            printf("Digite uma temperatura em Celsius: ");
            scanf("%f", &TEMP_C);
            TEMP_F = ((9 * (TEMP_C / 5)) + 32);
            printf("A temperatura em Farenheit é de %.2f \n", TEMP_F);
        }
        else if(MENU_2 == 2)
        {
            printf("Digite uma temperatura em Farenheit: ");
            scanf("%f", &TEMP_F);
            TEMP_C = ((5 * (TEMP_F - 32)) / 9);
            printf("A temperatura em Celsius é de %.2f \n", TEMP_C);
        }
        else if(MENU_2 == 3)
        {
            printf("Digite uma temperatura em Celsius: ");
            scanf("%f", &TEMP_C);
            TEMP_K = (TEMP_C + 273);
            printf("A temperatura em Kelvin é de %.2f \n", TEMP_K);
        }
        else
        {
            printf("Opção informada não existe!\n");
        }
    }
    else if(MENU_1 == 2) 
    {
        printf("1 - Converter km para milhas\n");
        printf("2 - Converter milhas para km\n");
        printf(">: ");
        scanf("%d", MENU_3);

        if(MENU_3 == 1)
        {
            printf("Digite uma distância em km: ");
            scanf("%f", &KM);
            MILHAS = (KM * 0.62137);
            printf("A distância em milhas é de %.2f \n", MILHAS);
        }
        else if(MENU_3 == 2)
        {
            printf("Digite uma distância em milhas: ");
            scanf("%f", &MILHAS);
            KM = (MILHAS / 0.62137);
            printf("A distância em km é de %.2f \n", KM); 
        }
        else
        {
            printf("Opção informada não existe!\n");
        }
    }
    else
    {
        printf("Opção informada não existe!\n");
    }    
    return(0);
}