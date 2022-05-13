/*3)Faça um programa que leia um número inteiro e verifique se esse número é par ou impar.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int num;

    printf("Digite um inteiro: ");
    scanf("%d",&num);

    if (num%2 == 0){
        printf("O número digitado é par.\n");
    }
    else{
        printf("O número digitado é ímpar.\n");
    }

    return 0;
}