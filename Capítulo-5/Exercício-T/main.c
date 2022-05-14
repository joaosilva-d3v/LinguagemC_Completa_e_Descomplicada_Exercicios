/*20) Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor 
E, conforme a fomrmula a seguir:

E = 1/1! = 1/2! + 1/3! + ... + 1/n!*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, j, fatorial = 1;
    double e;

    do{
        printf("Digite um valor inteiro positivo: ");
        scanf("%d",&n);
    }while(n < 0);

    for(j = 2; j <= n ; j++){
        fatorial = fatorial * j;
        e += (float)1/fatorial;
    }
    //printf("%d\n",fatorial);
    printf("%lf\n",e);


    return 0;
}