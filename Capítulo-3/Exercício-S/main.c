/*19) Elabore um programa que leia dois número inteiros e exiba o resultado das operações de 
"Ou exclusívo", "Ou bit a bit", e "E bit a bit", entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, ou_ex,out_bit, e_bit;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&num1, &num2);

    ou_ex = (num1 ^ num2);
    out_bit = (num1 | num2);
    e_bit = (num1 & num2);

    printf("Ou exclusívo: %d\n",ou_ex);
    printf("Ou bit a bit: %d\n",out_bit);
    printf("E bit a bit: %d\n",e_bit);

    return 0;
}