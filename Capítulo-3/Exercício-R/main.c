/*18) Elabore um programa que leia dois números e exiba o deslocamento, 
á esquerda e á direita, do primeiro número pelo sugundo.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, deslocamento;
    printf("Digite dois números inteiros: ");
    scanf("%d %d",&num1,&num2);

    deslocamento = (num1 << num2);
    printf("Deslocamento á esquerda: %d\n",deslocamento);
    deslocamento = (num1 >> num2);
    printf("Deslocamento á direita: %d\n",deslocamento);

    return 0;
}