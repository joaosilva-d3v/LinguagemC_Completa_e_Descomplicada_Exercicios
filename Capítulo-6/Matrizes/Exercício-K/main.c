/*11) Faça um programa que faça uma matriz de tamanho 5x5. Calcule e imprima a soma dos
elementos dessa matriz que estão acima da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[5][5], i, j, soma = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i < j){
                soma += matriz[i][j];
            }   
        }
    }
    
    printf("\nSoma do triângulo superior = %d\n",soma);

    return 0;
}