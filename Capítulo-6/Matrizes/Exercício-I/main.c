/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3x3 de números
inteiros. Em seguida, calcule um vetor contendo 3  posições, em que cada posição deverá armazenar
a soma dos números de cada coluna da matriz. exiba na tela esse array. Por exemplo, a matriz: 

5   -8  10
1   2   15
25  10  7

deverá gerar o vetor:

31  10  7*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3] = {0}, vetor[3], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
        }
        vetor[i] = 0;
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            vetor[j] += matriz[i][j];
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d]    ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nVetor com a soma das colunas: \n");
    for(i = 0; i < 3; i++){
        printf("[%d]    ",vetor[i]);
    }
    printf("\n");
            
    

    return 0;
}