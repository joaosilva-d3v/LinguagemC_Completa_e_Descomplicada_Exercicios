/*5) Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
I. O número digitado ao quadrado.
II. A raiz quadrada do número digitado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    float raizq;
    printf("Digite um número inteiro: ");
    scanf("%d",&num);
    raizq = num;

    if (num%2 == 0){
        num = num*num;
        printf("Número ao quadrado: %d\n",num);
    }
    else{
        raizq = sqrt(num);
        printf("Sua raiz quadrada é: %0.2f\n",raizq);
    }

    return 0;
}