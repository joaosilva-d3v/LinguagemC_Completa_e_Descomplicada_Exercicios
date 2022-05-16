/*6) Escreva um programa que leia do teclado 10 posições. Escreva na tela quantos valores 
pares foram armazenados nesse vetor. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], i, totpar = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        if(vetor[i]%2 == 0){
            printf("Valor %d na posição %d é par.\n",vetor[i], i+1);
            totpar += 1;
        }
    }
    printf("Total de pares = %d \n",totpar);

    return 0;
}