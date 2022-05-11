/*14) Faça um programa que leia três cacteres do tipo char e depois os 
imprima um em cada linha. Use um único comando printf() para isso.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra1, letra2, letra3;
    printf("Digite três caracteres: ");
    scanf("%c %c %c",&letra1,&letra2,&letra3);
    printf("%c \n%c \n%c \n",letra1, letra2, letra3);

    return 0;
}