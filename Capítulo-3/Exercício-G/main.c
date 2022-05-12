/*7) Faça um programa que leia um valor em reais e a cotação do 
dólar. Em seguida, imprima o valor correspondente em dólares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float real, dolar, cotacao;
    printf("Digite o valor em R$");
    scanf("%f",&real);
    printf("Digite o valor da cotação do dolar para reais R$");
    scanf("%f",&cotacao);

    dolar = real/cotacao;

    printf("O valor em dolar é de U$%f \n",dolar);

    return 0;
}