/*5) Faça um programa que calcule o ano de nacimento de uma
pessoa a partir de sua idade e do ano atual.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano_nasc, idade, ano_atual;
    printf("Digite sua idade e o ano atual logo em seguida: ");
    scanf("%d %d",&idade,&ano_atual);
    ano_nasc = ano_atual - idade;

    printf("Seu ano de nascimento é : %d \n",ano_nasc);

    return 0;
}