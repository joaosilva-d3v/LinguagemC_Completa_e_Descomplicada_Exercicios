/*3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros
números naturais ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i = 0, verificador = 1;
    printf("Digite um valor: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        verificador += 2;
        printf("%d  ",verificador);
    }

    printf("\n");

    return 0;
}