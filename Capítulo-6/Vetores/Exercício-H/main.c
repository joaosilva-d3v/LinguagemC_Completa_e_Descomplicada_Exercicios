/*8) Faça um programa que preencha um vetor de 10 números reais. Em seguida, 
calcule e mostre na tela a quantidade de números negativos e a soma dos numeros
positivos desse vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[10], i, negativos = 0, soma = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %d valor: ",i+1);
        scanf("%d",&vetor[i]);

        if(vetor[i] < 0){
            negativos += 1;
        }else{
            soma += vetor[i];
        }

    }

    printf("Quantidade de números negativos = %d \n",negativos);
    printf("Soma entre os números positivos = %d \n",soma);

    return 0;
}