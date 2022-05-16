/*2) Faça um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor contido
nessa matriz e a sua localização (linha, coluna)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4], i, j, maior = 0, linha, coluna;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                linha = i+1;
                coluna = j+1;
            }
        }
    }

    printf("O maior valor digitado foi: %d \n",maior);
    printf("Na linha %d \n",linha);
    printf("Na coluna %d \n",coluna);
    return 0;
}