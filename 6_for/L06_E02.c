/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

2. Faça um algoritmo que apresente os valores de 10 a 1.
*/

#include <stdio.h>

int main() {

    int i;

    for(i = 10; i >= 1; i = i - 1)
    {
        printf("%d\n", i);
    }
    return(0);
}