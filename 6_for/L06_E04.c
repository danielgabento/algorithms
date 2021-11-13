/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4. Faça um algoritmo que apresente os valores de 15 a 5.
*/

#include <stdio.h>

int main() {

    int i;

    for(i = 15; i >= 5; i = i -1)
    {
        printf("%d\n", i);
    }
    return(0);
}