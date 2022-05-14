/*9) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores, maior = 0, menor, compara, i = 1;
    printf("Digite o 1º valor: ");
    scanf("%d",&valores);
    menor = valores;
    do{
        i++;
        if(menor > valores){
            menor = valores;
        }
        if(maior < valores){
            maior = valores;
        }
        printf("Digite o %dº valor: ",i);
        scanf("%d",&valores);
    }while(i <= 9);
    printf("MAIOR = %d\n",maior);
    printf("MENOR = %d\n",menor);
    return 0;
}