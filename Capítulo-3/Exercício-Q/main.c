/*17) Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    unsigned char num, bitabit;
    printf("Digite um número inteiro: ");
    scanf("%d",&num);

    bitabit = ~num;

    printf("Valor bit a bit = %d\n",bitabit);

    system("pause");
    return 0;
}