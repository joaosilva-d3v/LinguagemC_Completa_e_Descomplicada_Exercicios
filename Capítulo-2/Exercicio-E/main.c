/*5) Faça um programa que leia um número inteiro e depois
o imprima usando o operador "%d". Veja o que aconteceu.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float number;
    printf("Digite um valor do tipo float: ");
    scanf("%f",&number);
    printf("Saída com o operador de inteiro: %d\n",number);

    return 0;
}