/*14) Faça um programa que converta uma letra maiúscula em uma letra minúscula.
Use a tabela ASCII para isso.*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    char letra;

    printf("Digite uma letra maiúscula: ");
    letra = getchar();

    printf("E assim é essa letra minúscula: : %c\n", letra + 32);

    return 0;
}