/*4) Faça um programa que leia um número inteiro e depois
o imprima usando o operador "%f". Veja o que aconteceu.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    printf("Digite um valor inteiro: ");
    scanf("%d",&number);
    printf("Saída com o operador de float: %f\n",number);

    return 0;
}