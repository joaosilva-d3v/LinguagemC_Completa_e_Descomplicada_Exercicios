/*6) Leia uma matriz de tamanho 3x3. Em seguida, imprima a soma 
dos valores contidos em sua diagonal secundaria.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3], i, j, soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(i == 3 - 1 - j){
                soma += matriz[i][j];
            }
        }
    }
    //((i == 0 && j == 2)||(i == 1 && j == 1)||(i == 2 && j == 0))
    /*Diagonal Secundaria : i == ncolunas - 1 - j
    ou
    Diagonal Secundaria : j == nlinhas - 1 - i*/
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("[%d]    ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma da diagonal secundaria = %d \n",soma);

    return 0;
}