/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

4. Faça um programa que peça três lados de um triângulo (pode ser apenas números inteiros).
O programa deve apresentar se os lados apresentados formam ou não um triângulo. As
mensagens devem ser: “é um triângulo” ou “não é um triângulo”. Para saber se é possível criar
um triângulo, a regra é: cada lado precisa ser menor que a soma dos outros dois lados (do
contrário, o triângulo não fecha). Veja a explicação ilustrada abaixo:
Repare que o lado B do desenho não respeita a regra, porque B > A + C. Por isso, não tem como
o triângulo ser fechado

Mas no desenho a seguir, é possível montar um triângulo:
Isso porque:
• A < B + C
• B < A + C
• C < A + B
*/

#include <stdio.h>

int main() {

    int A, B, C;

    printf("\n||||| Validação de triângulos |||||\n\n ");
    printf("Informe o primeiro lado de um triângulo (A): ");
    scanf("%d", &A);
    printf("Informe o segundo lado de um triângulo (B): ");
    scanf("%d", &B);
     printf("Informe o terceiro lado de um triângulo (C): ");
    scanf("%d", &C);

    if((A < B + C) && (B < A + C) && (C < A + B))
    {
        printf("É um triângulo\n");
    }
    else 
    {
        printf("Não é um triângulo\n");
    }
    return(0);
}