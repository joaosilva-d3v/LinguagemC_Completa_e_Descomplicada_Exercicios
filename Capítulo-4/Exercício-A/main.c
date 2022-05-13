/*1) Faça um programa que leia dois números e mostre qual deles é maior.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    printf("Digite dois numeros inteiros diferentes: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        printf("%d é maior que %d.\n", num1, num2);
    }
    else{
        printf("%d é maior que %d.\n", num2, num1);
    }

    return 0;
}