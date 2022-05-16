/*15) Leia um vetor com, 10 números de ponto flutuante. em seguida, ordeneos elementos desse vetor
e imprima o vetor na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float vetor[10], aux;
    int i, j;

    for(i = 0; i < 10; i++){
        printf("Dgite o %dº valor: ",i+1);
        scanf("%f",&vetor[i]);
    }
    for(i = 0; i < 9;i++){
        for(j = i+1; j < 10; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%.1f ",vetor[i]);
    }
    printf("\n");

    return 0;
}