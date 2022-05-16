/*5) Faça um programa que leia um vetor de 8 posições. Em seguida, leia também dois valores 
X  e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma
dos valores encontrados nas respectivas posições X e Y.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[8], i, x, y;

    for(i = 0; i < 8; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    do{
    printf("Agora digite os valores de X e Y, respectivamente: ");
    scanf("%d %d",&x,&y);
    }while((x < 0) || (x > 8) || (y < 0 || y > 8));

    printf("A soma dos valores nas posições de X e Y é = %d \n", vetor[x-1]+vetor[y-1]);

    return 0;
}