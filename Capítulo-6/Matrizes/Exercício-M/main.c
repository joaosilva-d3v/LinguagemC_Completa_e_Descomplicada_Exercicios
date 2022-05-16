/*13) Faça um programa que leia uma matiz de 5x5. Calcule e imprima a soma dos elementos
dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], i, j, soma = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(!(i == j) && !(i == 5 - 1 - j)){
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

    printf("\nA soma dos valores que não estão localizados na diagonal \nprincipal e nem na diagonal secundária é de = %d \n",soma);

    return 0;
}