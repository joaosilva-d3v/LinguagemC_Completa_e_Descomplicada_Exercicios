/*7) Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma 
dos valores contidos em sua diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma da diagonal principal = %d \n",soma);

    return 0;
}