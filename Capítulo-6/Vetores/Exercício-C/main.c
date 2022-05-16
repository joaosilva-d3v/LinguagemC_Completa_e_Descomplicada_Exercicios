/*3) Faça um programa que leia cinco valores e os armazena em outro vetor. 
Em seguida, mostre todos os valores lidos juntamente com a média dos valores. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float valoreslidos[5], valorespassados[5], media = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%f",&valoreslidos[i]);
        valorespassados[i] = valoreslidos[i];
    }
    printf("Valores lidos: \n");
    
    for(i = 0; i < 5; i++){
        printf("%.2f ",valorespassados[i]);
        media = media + (valorespassados[i]/5.0);
    }
    printf("\n");
    printf("Média = %.2f \n",media);
    return 0;
}