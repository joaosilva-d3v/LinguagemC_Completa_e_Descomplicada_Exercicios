/*10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com o valor numérico digitado pelo usuário e mostrado
na tabela a seguir:

NÚMERO DIGITADO         MÉDIA
                        Geométrica
    1                   X*Y*z

                        Ponderada
    2                   (x+2*y=3*z)/6

                        Harmônica
    3                   (1)/(1/x)+(1/y)+(1/z))

                        Aritmética
    4                   (x+y+z)/3*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int esc;
    float x, y, z, media, soma, expoente;
    printf("Digite o valor de X:");
    scanf("%f", &x);
    printf("Digite o valor de Y:");
    scanf("%f", &y);
    printf("Digite o valor de Z:");
    scanf("%f", &z);

    printf("------------------------\n");
    printf("Escolha a média desejada: \n[1]Geométrica     [2]Ponderada\n[3]Harmônica      [4]Aritmética\nOpção: ");
    scanf("%d", &esc);

    switch (esc){
        case 1:{
            expoente = 1.0/3.0;
            soma = x*y*z;
            media = pow(soma, expoente);}
            break;
        case 2:{
            media = (x + 2 * y + 3 * z) / 6;}
            break;
        case 3:{
            media = 3 / (1/x+1/y+1/z);}
            break;
        case 4:{
            media = (x + y + z) / 3;}
            break;
        default:{
            printf("Opção invalida!\n");
        }
    }

    printf("O valor da média escolhida é : %0.2f\n", media);

    return 0;
}