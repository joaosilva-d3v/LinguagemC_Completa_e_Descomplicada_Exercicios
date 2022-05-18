/*7) Faça um programa que leia um string e imprima uma mensagem dizendo se ela é um palíndromo
ou não. Um palindromo é uma palavra que tem a propriedade de poder ser lida tanto da direita 
para esquerda como da esquerda para a direita. Exemplo: ovo, arara, revver, asa, osso etc.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[15] = {0}, aux[15] = {0};
    int i, cont = 0, verificador;

    printf("Digite uma palavra qualquer: ");
    fgets(palavra, 15, stdin);

    strcpy(aux, palavra);


    for(i = strlen(palavra) - 2; i > 0; i--){
        aux[cont] = palavra[i];
        cont += 1;
    }

    verificador = strcmp(palavra, aux);
    if(verificador == 0){
        printf("Essa palavra é um palindromo. \n");
    }else{
        printf("Essa palavra não é um palindromo. \n");
    }

    return 0;
}