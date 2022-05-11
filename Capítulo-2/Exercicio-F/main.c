/*6) Faça um programa que leia um valor do tipo double 
e depois o imprima na forma de notação científica.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    double number;
    printf("Digite um valor do tipo double: ");
    scanf("%f",&number);
    printf("Notação científica: %e\n",number);

    return 0;
}