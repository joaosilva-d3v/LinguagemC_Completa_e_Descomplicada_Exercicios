/*7) Elabore um programa que peça ao usuário para digitar 10 valores. 
Some esses valores e apresente o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, soma = 0, i = 1;

    do{
        printf("Digite o %dº valor: ",i);
        scanf("%d",&valor);
        soma += valor;
        i++;
    }while(i <= 10);
    printf("A soma dos valores digitados é de: %d\n",soma);

    return 0;
}