/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[10], b[10], c[10], i;

    printf("Vetor A: \n");
    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Vetor B: \n");
    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&b[i]);
        c[i] = a[i] - b[i];
    }
    for(i = 0; i < 10; i++){
        printf("%d ",c[i]);
    }
    printf("\n");

    return 0;
}