/*5) Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada 
na mesma variável. Em seguida imprima a string invertida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[11], aux[11];
    int i, j, b;

    printf("Digite uma string qualquer: ");
    fgets(str, 11, stdin);

    b = strlen(str) - 1;

    for(i = 0; i < strlen(str); i++){
        aux[i] = str[b - 1];
        b--;
    }
    strcpy(str, aux);
    
    printf("Valor de str: %s\n",&str);

    return 0;
}