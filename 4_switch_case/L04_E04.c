/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4. Faça um algoritmo que peça o mês do ano (de 1 a 12). O algoritmo deve apresentar a
mensagem de quantos dias o mês tem, ou “mês inválido”, caso digite um mês inválido.
*/

#include <stdio.h>

int main() {

    int menu;

    printf("\n|||||| CONTADOR DE DIAS DOS MESES||||||\n\n");
    printf("Informe o mês do ano:\n");
    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Março\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");
    printf(">:");
    scanf("%d", &menu);

    switch (menu)
    {
    case 2:
        printf("O mês escolhido possui 28 dias\n");
        break;
    case 4: 
    case 6:
    case 9:
    case 11:
        printf("O mês escolhido possui 30 dias\n");   
        break;
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("O mês escolhido possui 31 dias\n");   
        break;
    } 
    return(0);
}