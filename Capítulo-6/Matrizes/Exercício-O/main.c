/*15) Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule
e imprima a matriz B, sendo B = A².*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int a[5][5], b[5][5], i, j, cont = 1;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite o %dº valor: ", cont);
            scanf("%d",&a[i][j]);
            cont += 1;
            b[i][j] = a[i][j]*a[i][j];
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("[%d]    ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}