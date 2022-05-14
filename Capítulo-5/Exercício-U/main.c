/*21) Escreva um programa que leia certa quantidade de números, imprima o maior deles e 
quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser
fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, maior = 0,quant_maior = 0, i, digitado;

    printf("Digite um valor inteiro maior que 0: ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++){
        printf("Digite o %dº valor:",i);
        scanf("%d",&digitado);
        
        if(digitado > maior){
            maior = digitado;
            quant_maior = 0;
        }
        if(maior == digitado){
            quant_maior += 1;
        }
    }
    printf("Maior = %d\n",maior);
    printf("Quantidade de vezes que maior valor foi digitado = %d\n",quant_maior);


    return 0;
}