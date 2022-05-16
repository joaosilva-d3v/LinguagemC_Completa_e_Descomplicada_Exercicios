/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números 
naturais que não são multiplos de 7. Ao final, imprima esse vetor.*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int vetor[100], i, j = 0;

    for(i = 0; i < 100; i++){
        vetor[i] = 0;
    }
    i = 1;

    do{
        if(i%7 == 0){
            j += 1;
            vetor[j] = i;
        }
        i++;
    }while(vetor[99] == 0);

    for(i = 0; i < 100; i++){
        printf("%d \n",vetor[i]);
    }

    return 0;
}