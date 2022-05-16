/*4) Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela 
quantos valores maiores do que 10 ela possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4], i, j, maiorque10;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j] > 10){
                maiorque10 += 1;
            }
        }
    }

    printf("Valores maiores que 10: %d\n",maiorque10);
    return 0;
}