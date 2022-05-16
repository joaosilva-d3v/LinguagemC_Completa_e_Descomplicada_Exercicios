/*5) Leia uma matriz de tamanho 4x4. Em seguida, conte e escreva na tela quantos 
valores nagativos ela possui.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[4][4], i, j, negativos = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j] < 0){
                negativos += 1;
            }
        }
    }
    printf("\n");
    printf("Há %d valores negativos nessa matriz. \n", negativos);

    return 0;
}