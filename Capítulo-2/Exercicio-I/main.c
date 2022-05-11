/*9) Faça um programa que leia dois valores do tipo float. Use 
um único comando de leitura para isso. Em seguida imprima os 
valores lidos na ordem inversa que eles foram lidos*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2;
    printf("Digite dois números do tipo float: ");
    scanf("%f %f",&num1,&num2);
    printf("A ordem inversa é: %f, %f\n",num2,num1);

    return 0;
}