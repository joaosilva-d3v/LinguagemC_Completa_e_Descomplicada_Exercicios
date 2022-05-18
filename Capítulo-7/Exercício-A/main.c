/*1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[51];

    printf("Digite uma string qualquer: ");
    fgets (str, 51, stdin);
    printf("A string digitada foi : %s",str);

    return 0;
}