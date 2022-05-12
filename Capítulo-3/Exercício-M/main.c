/*13) Sejam A e B os catetos de um triângulo cuja hipotenusa H é obtida pela equação:
B = √A^2 = B^2. Faça um programa que leia os valores de A e B, e calcule o valor da 
hipotenusa através da fórmula dada. Imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define exp 2

int main(){

    float a, b, h;
    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B:");
    scanf("%f",&b);

    h = sqrt(pow(a, exp) + pow(b, exp));

    printf("A hipotenusa é de : %f\n",h);

    return 0;
}