/*12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais
e os escreva na tela.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int vetor[10], i, j;

    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("Valores repetidos: %d\n",vetor[i]);
            }
        }
    }
    printf("\n");


    return 0;
}