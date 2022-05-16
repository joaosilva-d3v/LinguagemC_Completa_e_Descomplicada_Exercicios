/*7) Faça um programa que leia do usuário um vetor X com 10 posições. Em seguida 
deverão ser impresos o maior e menor valor elemento desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x[10], i, maior = 0, menor;
    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&x[i]);
        menor = x[5];
    }
    for(i = 0; i < 10; i++){
        if(maior < x[i]){
            maior = x[i];
        }
        if(menor > x[i]){
            menor = x[i];
        }
    }
    printf("Maior = %d \n",maior);
    printf("Menor = %d \n",menor);
    return 0;
}