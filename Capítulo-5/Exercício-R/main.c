/*18) Faça um programa que receba um número inteiro maior do que 1 e verifique
se o número fornecido é primo ou não.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, divisores;

    do{
        printf("Digite um valor inteiro maior que 1: ");
        scanf("%d",&n);
    }while(n <= 0);

    for(i = 2; i <= n - 1; i++){
        if(n%i == 0){
            divisores++;
        }
    }

    if(divisores != 0){
        printf("Não é primo!\n");
    }else{
        printf("É primo!\n");
    }

    return 0;
}