/*3)Escreva um programa que leia um número inteiro e depois imprima a mensagem
"Valor lido:", seguindo do valor inteiro. Use apenas um comando printf()*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int number;
    scanf("%d",&number);
    printf("Valor lido: %d\n", number);

    return 0;
}