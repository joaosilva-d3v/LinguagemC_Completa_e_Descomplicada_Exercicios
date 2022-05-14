/*11) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os 
divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor, i, divisor;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    for(i = 1; i <= valor; i++){
        if(valor%i == 0){
            divisor = i;
            printf("%d ",divisor);
        }
    }
    printf("\n");

    return 0;
}