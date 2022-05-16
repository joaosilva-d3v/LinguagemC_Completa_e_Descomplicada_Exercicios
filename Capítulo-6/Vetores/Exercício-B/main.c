/*2) Crie um programa que leia do teclado 6 valores inteiros e em seguida mostre
na tela os valores lidos na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores[6], i;

    for(i = 0; i < 6; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&valores[i]);
    }

    printf("Valores inversos: \n");

    for(i = 5; i >= 0; i--){
        printf("%d ",valores[i]);
    }
    printf("\n");

    return 0;
}