/*11) Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em
minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char str[30];
    int i;

    printf("Digite uma string maiúscula qualquer: ");
    fgets(str, 30, stdin);


    for(i = 0; i < strlen(str) - 1; i++){
        if((str[i] != ' ')){
            str[i] = str[i] + 32;
        }
    }

    printf("%s \n",&str);

    return 0;
}