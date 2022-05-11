/*10) Elabore um programa que solicite ao usuário entrar com
o valor do dia, mês e ano (inteiros). Em seguida imprima os 
valores lidos separados por uma barra (\)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia, mes, ano;
    printf("Digite uma data desejada(dd/mm/aaaa): ");
    scanf("%d %d %d",&dia,&mes,&ano);
    printf("%d\\%d\\%d \n", dia, mes,ano);

    return 0;
}