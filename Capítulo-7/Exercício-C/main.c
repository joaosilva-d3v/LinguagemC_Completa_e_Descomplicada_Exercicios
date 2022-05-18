/*3) Sem usar a função strlen, faça um programa que leia uma string e imprima
quantos caracteres ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[16];
    int i, cont = 0;

    printf("Digite uma string qualquer: ");
    fgets(str, 16, stdin);

    for(i = 0; str[i] != '\0'; i++){
        if(!(str[i] == ' ')){
            cont += 1;
        }
    }

    printf("Essa string possui %d caracteres.",cont - 1);


    return 0;
}