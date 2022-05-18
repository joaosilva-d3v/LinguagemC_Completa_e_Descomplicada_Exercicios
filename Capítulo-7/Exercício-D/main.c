/*4) Faça um programa que leia uma string e a imprima de trás para frente*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[16];
    int i, cont;

    printf("Digite uma string qualquer: ");
    fgets(str, 16, stdin);

    for(i = strlen(str) - 1; i >= 0; i--){
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}