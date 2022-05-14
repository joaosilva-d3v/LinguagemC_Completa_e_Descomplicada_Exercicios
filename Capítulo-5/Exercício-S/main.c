/*19) Faça um programa que calcule e escerva o valor de S:

S = 1/1+3/2+5/3+7/4+ ... +99/50*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int numerador, denominador;
    float soma;

    soma = 0;
    numerador = 1;
    for(denominador = 1; denominador <= 50; denominador++){
        soma = soma + (float)numerador/numerador;
        numerador = numerador + 2;

    }

    printf("S = %f\n",soma);
    return 0;
}