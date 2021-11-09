/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2. Faça um algoritmo que apresente as seguintes opções de menu:
A- Avião
B- Carro
C- Cruzeiro
Caso o usuário digite A, o algoritmo deve apresentar a mensagem “É mais rápido!”
Caso o usuário digite B, o algoritmo deve apresentar a mensagem “É mais barato!”
Caso o usuário digite C, o algoritmo deve apresentar a mensagem “É mais bonito!”
*/

#include <stdio.h>

int main() {

    char menu;

    printf("A - Avião\n");
    printf("B - Carro\n");
    printf("C - Cruzeiro\n");
    printf(">:");
    scanf("%s", &menu);

    switch (menu)
    {
    case 'A': // a variável menu é um inteiro, os valores do case não podem estar entre aspas
        printf("É mais rápido!\n");
        break;
    case 'B':
        printf("É mais barato!\n");   
        break;
    case 'C':
        printf("É mais bonito!\n");   
        break;
    } 
    return(0);
}