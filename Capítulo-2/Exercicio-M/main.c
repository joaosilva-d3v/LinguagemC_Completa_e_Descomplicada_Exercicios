/*13) Faça um programa que leia um cactere do tipo char e depois 
o imprima entre aspas duplas. Assim, se o caractere lido for a 
letra A, deverá ser impresso "A".*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra;
    printf("Digite um caractere: ");
    scanf("%c",&letra);
    printf("Aqui esta seu caractere \"%c\" \n",letra);

    return 0;
}