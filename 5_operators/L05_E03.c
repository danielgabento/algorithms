/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

3. Faça um programa que peça a idade do usuário. Se ele tiver entre 18 e 65 anos, apresentar a
mensagem: “Você é obrigado a votar”. Do contrário, apresentar a mensagem: “você não é
obrigado a votar”.
*/

#include <stdio.h>

int main() {

    int IDADE;

    printf("Informe sua idade: ");
    scanf("%d", &IDADE);

    if((IDADE >= 18) && (IDADE <= 65))
    {
        printf("Você é obrigado a votar\n");
    }
    else 
    {
        printf("Você não é obrigado a votar\n");
    }
    return(0);
}