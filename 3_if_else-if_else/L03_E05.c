/* 
..Universidade Tecnológica Federal do Paraná - UTFPR
..Engenharia de Software

5. Faça um algoritmo que peça a altura (em metros) e a sua massa (em quilos). Em
seguida, deve-se calcular o Índice de Massa Corporal, da seguinte forma:
IMC=massa/(altura * altura)
De acordo com o resultado, o algoritmo deve apresentar uma mensagem, como
abaixo:
a. Abaixo de 17: “muito abaixo do peso”;
b. Abaixo de 18.5 (e maior ou igual a 17): “abaixo do peso”;
c. Abaixo de 25 (e maior ou igual a 18.5): “peso normal”;
d. Abaixo de 30 (e maior ou igual a 25): “acima do peso”;
e. Abaixo de 35 (e maior ou igual a 30): “obesidade I”;
f. Abaixo de 40 (e maior ou igual a 35): “obesidade II (severa)”;
g. Se não for nenhuma das opções (igual ou maior que 40): “obesidade III
(mórbida)”.
*/

#include <stdio.h>

int main() {

    float alt, massa, imc;

    printf("Informe sua altura em metros: ");
    scanf("%f", &alt); 

    printf("Informe sua massa em quilos: ");
    scanf("%f", &massa); 

    imc = (massa / (alt * alt));

    if (imc < 17) {
        printf("Muito abaixo do peso\n"); 
    }
    else if ((imc < 18.5) && (imc >= 17)) {
        printf("Abaixo do peso\n"); 
    }  
    else if ((imc < 25) && (imc >= 18.5)) {
        printf("Peso normal\n"); 
    } 
    else if ((imc < 30) && (imc >= 25)) {
        printf("Acima do peso\n"); 
    }
    else if ((imc < 35) && (imc >= 30)) {
        printf("Obesidade I\n"); 
    }
    else if ((imc < 40) && (imc >= 35)) {
        printf("Obesidade II\n"); 
    }
    else {
        printf("Obesidade III\n"); 
    }   
    return(0);
}