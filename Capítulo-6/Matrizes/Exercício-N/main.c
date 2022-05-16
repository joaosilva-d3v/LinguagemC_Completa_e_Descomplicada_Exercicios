/*14) Faça um programa que leia uma matriz de tamanho 5x5. Calcule a soma dos elementos 
dessa matriz que pertencem á diagonal principal ou secundaria. calcule também a soma dos
elementos que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre
os valores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], i, j, soma1 = 0, soma2 = 0, cont = 1;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o %dº valor:",cont );
            scanf("%d",&matriz[i][j]);
            cont += 1;
            if(i == 5 - 1 - j){
                soma1 += matriz[i][j];
            }
            if(!(i == j) && !(i == 5 - 1 - j)){
                soma2 += matriz[i][j];
            }
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d]    ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA diferença entre as somas é = %d \n",soma2 - soma1);

    return 0;
}