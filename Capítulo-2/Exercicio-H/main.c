/*8) Faça um programa que leia dois números inteiros e depois os
os imprima na ordem inversa em que eles foram lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d",&num1, &num2);
    printf("A ordem inversa é: %d %d\n",num2,num1);

    return 0;
}