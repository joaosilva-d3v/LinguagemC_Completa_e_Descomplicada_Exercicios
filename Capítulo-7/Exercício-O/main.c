/*15) Escreva um programa que leia duas strings e as imprima em ordem alfabetica,
a ordem em que elas aparecem em um dicionário.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str1[12], str2[12];
    int i;

    printf("Digite uma palavra qualquer: ");
    fgets(str1, 12, stdin);
    printf("Digite outra palavra qualquer:");
    fgets(str2, 12, stdin);

    if(str1[0] < str2[0]){
        printf("Ordem: \n %s %s\n", str1, str2);
    }else{
        printf("Ordem: \n %s %s\n",str2, str1);
    }
    
    return 0;
}