/*3) Faça um programa que leia um matriz de tamanho 5x5. preencha com 1 a diagonal principal e com 0
os demais elementos. Ao final, escreva a matriz obtida na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    printf("Diagonal principal: \n\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}