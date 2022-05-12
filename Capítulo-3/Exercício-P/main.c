/*16) Escreva um programa que leia um número inteiro e mostre a multiplicação e a
divisão desse número por dois (Utilize os operadores de deslocamento de bits)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, mult;
    printf("Digite um valor a ser multiplicado por 2: ");
    scanf("%d",&num);

    //Cada movimentação de bits equivala a multiplicar ou dividir (divisão inteira) por 2
    mult = (num << 1);

    printf("O valor multiplicado é %d\n",mult);

    return 0;
}