/*4) Faça um programa que possua um array de nome A que armazene seis números inteiros. 
O programa deve executar os seguintes passos:
A) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7
B) Armazene em uma variável a soma dos valores das possições  A[0], A[1] e A[5] do array e mostre na tela essa soma.
C) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
D) Mostre na tela cada valor do array A, um em cada linha.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A[] = {1, 0, 5, -2, -5, 7}, somap = 0, i;
    somap = A[0] + A[1] + A[5];
    A[4] += 100;

    printf("Valores da variável: \n");

    for(i = 0; i < 6; i++){
        printf("%d \n",A[i]);
    }
    printf("Soma das posições A[0], A[1] e A[5] = %d \n",somap);

    return 0;
}