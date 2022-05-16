/*12) Faça um programa que faça uma matriz de tamanho 6x6. Calcule e imprima a soma dos
elementos dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], i, j, soma = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i > j){
                soma += matriz[i][j];
            }   
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d]    ",matriz[i][j]);  
        }
        printf("\n");
    }
    
    printf("\nSoma do triângulo inferior = %d\n",soma);

    return 0;
}