/*2) Faça um programa que leia dois números e mostre o maior deles. Se por acaso,
os dois números forem iguais, imprima a mensagem "Números iguais".*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1,&num2);

    if (num1 > num2)
    {
        printf("%0.2f é maior que %0.2f\n", num1, num2);
    }
    else{
        if (num2 > num1)
        {
            printf("%0.2f é maior que %0.2f\n",num2, num1);
        }
        else
        {
            printf("Números iguais.\n");
        }
        
    }

    return 0;
}