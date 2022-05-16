/*1) Crie um programa que leia do teclado 6 valores inteiros e em seguida mostre na 
tela os valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declaração de variaveis
    int valores[6], i = 0;

    do{
        printf("Dgite o %dº valor: ",i+1);
        scanf("%d",&valores[i]);
        i++;
    }while(i < 6);

    i = 0;
    printf("Valores lidos: \n");

    while(i < 6){
        printf("%d ",valores[i]);
        i++;
    }
    printf("\n");

    //O não uso do comando for que deixaria o programa mais agradavél foi proposital.

    return 0;
}