/*3) Faça um programa que leia três valores inteiros e mostre sua soma.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c, d;
    printf("Dgite três valores inteiros: ");
    scanf("%d %d %d",&a,&b,&c);
    d = a+b+c;
    printf("A soma dos três valores é: %d \n",d);


    return 0;
}