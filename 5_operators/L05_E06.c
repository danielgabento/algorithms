/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

6. Imagine um problema de gerenciamento de fila de um banco que emite senhas para aguardar
na fila. Faça um programa que:
a. Peça o número da senha para o usuário;
b. Apresente o menu 1-Prioridade; 2-Aposentado; 3-Comum.
c. Se o número da senha for menor que 100, o programa deve apresentar a mensagem:
“aguarde para ser atendido”.
d. Senão, o programa deve apresentar uma mensagem, conforme a opção:
i. Se for 1, “Você será reagendado para amanhã”;
ii. Se for 2, “Você será reagendado para depois de amanhã”;
iii. Se for 3, “Você deve tentar outro dia”.
*/

#include <stdio.h>

int main() {

    int SENHA, MENU;

    printf("\n||||| Atendimento |||||\n\n");
    printf("Informe sua senha: ");
    scanf("%d", &SENHA);
    printf("Informe o tipo de senha\n\n");
    printf("1 - Prioridade\n");
    printf("2 - Aposentado\n");
    printf("3 - Comum\n");
    printf(">: ");
    scanf("%d", &MENU);

    if(SENHA >= 100)
    {
        if(MENU == 1)
        {
            printf("Você será reagendado para amanhã\n");
        }
        else if(MENU == 2)
        {
            printf("Você será reagendado para depois de amanhã\n");
        }
        else if(MENU == 3)
        {
            printf("Você deve tentar outro dia\n");
        }
        else
        {
            printf("Opção informada não confere!!!\n");
        }
    }
    else 
    {
        printf("Aguarde para ser atendido\n");
    }
    return(0);
}