/*2) Faça um programa que leia um número real e imprima a quinta parte do número*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num, result;
    printf("Digite um número qualquer: ");
    scanf("%f",&num);
    result = num/5;
    printf("A quinta parte desse valor é: %0.2f \n",result);

    return 0;
}