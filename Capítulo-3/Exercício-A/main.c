/*1) Faça um programa que leia um número inteiro 
e retorne seu antecessor e seu sucessor*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    printf("Digite um número qualquer: ");
    scanf("%d",&num);
    printf("Seu antecessor é: %d \n",num -= 1);
    printf("Seu sucessor é : %d \n",num += +2);

    return 0;
}