/*15) Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa que inicialize
um dos tipos dessa união e exiba em tela o valor do outro tipo.*/

#include <stdio.h>
#include <stdlib.h>
union nome_union{
    short int x;
    unsigned char c;
};

int main(){
    union nome_union teste;
    teste.x = 2222;
    printf("C = %d\n",teste.c);

    return 0;
}