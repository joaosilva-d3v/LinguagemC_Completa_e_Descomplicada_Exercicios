/*12) Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele proprio. Exemplo: A soma dos divisores do número 66 é 
1+2+3+6+11+22+33 = 78.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, i, divisor, soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        if(valor%i == 0){
            divisor = i;
            printf("%d ",divisor);
            if(divisor != valor){
                soma += divisor;
            }
        }
    }
    printf("\n");
    printf("A soma dos divisores de %d é %d \n",valor,soma);
    
    return 0;
}