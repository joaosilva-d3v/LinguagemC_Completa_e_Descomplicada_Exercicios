/*5) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    long int i, soma = 0;

    for (i = 0; i <= 100; i++){
        if(i%2 == 0){
            soma = soma + i;
        }
    }

    printf("A soma dos 50 primeiros valores pares é de: %d\n",soma);

    return 0;
}