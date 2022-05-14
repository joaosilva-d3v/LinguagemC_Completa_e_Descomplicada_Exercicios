/*13) Faça um programa que exiba a soma de todos os némeros naturais abaixo de 1.000
que são multiplos de 3 ou 5*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1, soma = 0;

    while(i <= 1000 ){
        if(i%3 == 0 || i%5 == 0){
            soma += i;
        }
        i++;
    }

    printf("A soma dos divisores de 3 ou 5 até 1.000 é de %d \n",soma);
    return 0;
}