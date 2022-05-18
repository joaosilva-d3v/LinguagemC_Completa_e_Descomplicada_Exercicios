/*2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[30];
    int i, aux = 3;
    printf("Digite uma string qualquer: ");
    fgets(str, 30, stdin);

    printf("As quatro primeiras letras da string são: ");
    for(i = 0; i <= aux; i++){
        if(str[i] == ' '){
            aux += 1;
        }else{
            printf("%c",str[i]);
        }
    }
    printf("\n");

    return 0;
}