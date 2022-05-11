/*7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char a;

    printf("Digite um caractere qualquer: ");
    scanf("%c",&a);

    printf("Caractere com valor inteiro igual a %d \n",a);

    return 0;
}