/*8) Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros, i;
    float media;

    for(i = 1; i <= 10; i++){
        printf("Digite o %dº valor: ",i);
        scanf("%d",&numeros);
        media += (float)numeros;
    }
    media = media/10;
    printf("A média entre os valores digitados é de: %.1f\n",media);

    return 0;
}