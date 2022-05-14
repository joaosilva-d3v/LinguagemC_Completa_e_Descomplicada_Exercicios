/*10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores, i = 1;
    float media;
    do{
        printf("Digite um valor inteiro: ");
        scanf("%d",&valores);
        if(valores >= 0){
            media = media + ((float)valores/10);
            i++;
        }
    }while(i <= 10);
    printf("A média dos valores positivos digitados é de : %.1f\n",media);
    return 0;
}