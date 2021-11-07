/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

7 - Faça um algoritmo que peça o nome de um usuário. 
Em seguida, o algoritmo deve pedir o gênero do usuário 
(‘f’ para feminino e ‘m’ para masculino). Se o usuário for do sexo feminino, 
apresentar a mensagem “Olá, senhora <nome>“. Do contrário, apresentar a mensagem 
“Olá, senhor <nome>“. Observação: faça de conta que o usuário sempre digitará ‘f’ ou ‘m’. 
*/

#include <stdio.h>
#include <string.h> // biblioteca necessária para comparar strings

int main() {

    char nome[10], genero[2];
    int cmp ;

    printf("Digite seu nome: ");
    scanf("%s", &nome); 
    
    printf("Digite seu gênero (f/m): ");
    scanf("%s", &genero); 

    cmp = strcmp(genero,"f"); // strcmp função que compara duas strings e retorna 0 se elas forem iguais

    if (cmp == 0) {
        printf("Olá, senhora %s\n",nome); 
    }
    else {
        printf("Olá, senhor %s\n",nome);
    }
    return(0);
}