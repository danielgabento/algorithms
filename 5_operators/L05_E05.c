/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

5. Imagine um parque infantil. Faça um programa que peça a altura do usuário e a idade.
a. Se tiver altura menor que 1,6m, pode entrar no parque. Neste caso:
i. Se tiver menos ou 5 anos, escreva a mensagem: “Pode brincar no pula-pula e
Casinha”;
ii. Se tiver entre 5 e 8 anos, escreva a mensagem: “Pode brincar na prancha do pirata
e piscina de bolinhas”.
iii. Se tiver mais de 8 anos, escreva a mensagem: “Pode brincar de pebolim, pingpong
e basquete”.
b. Se tiver altura maior ou igual a 1,6m, escreva a mensagem: “Você é muito grande para
entrar no parque”. 
*/

#include <stdio.h>

int main() {

    float ALT;
    int IDADE;

    printf("\n||||| Seja bem-vindo ao parque |||||\n\n ");
    printf("Antes de entrar, informe sua altura (em metros): ");
    scanf("%f", &ALT);
    printf("Informe sua idade (em anos): ");
    scanf("%d", &IDADE);

    if(ALT < 1.6)
    {
        if(IDADE <= 5)
        {
            printf("Pode brincar no pula-pula e casinha\n");
        }
        else if((IDADE > 5) && (IDADE <= 8))
        {
            printf("Prode brincar na prancha do pirata e piscina de bolinhas\n");
        }
        else
        {
            printf("Pode brincar de pebolim, pingpong e basquete\n");
        }
    }
    else 
    {
        printf("Você é muito grande para entrar no parque\n");
    }
    return(0);
}