/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

1. Faça um algoritmo de Pokedex que apresente 3 opções:
1-Pikachu;
2-Bulbassauro;
3-Charmander.
Caso o usuário escolha a opção 1, o algoritmo deve apresentar a mensagem “Pokémon
elétrico da categoria rato”.
Caso o usuário escolha a opção 2, o algoritmo deve apresentar a mensagem “Pokémon
de grama da categoria semente”.
Caso o usuário escolha a opção 3, o algoritmo deve apresentar a mensagem “Pokémon
de fogo da categoria lagarto”.
Caso o usuário escolha outra opção, o algoritmo deve apresentar a mensagem
“Pokémon não cadastrado. Há 890 Pokémons! Temos que pegar!”
*/

#include <stdio.h>

int main() {

    int menu;

    printf("\n|||||| Pokedéx ||||||\n\n");
    printf("1 - Pikachu\n");
    printf("2 - Bulbassauro\n");
    printf("3 - Charmander\n");
    printf(">:");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1: // a variável menu é um inteiro, os valores do case não podem estar entre aspas
        printf("Pokémon elétrico da categoria rato\n");
        break;
    case 2:
        printf("Pokémon de grama da categoria semente\n");   
        break;
    case 3:
        printf("Pokémon de fogo da categoria lagarto\n");   
        break;
    } 
    return(0);
}