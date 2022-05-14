/*14) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima 
o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a 
partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. alguns termos
dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ...*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int anterior = 0, posterior = 1, i, enesimo, aux;

    printf("Digite um valor: ");
    scanf("%d",&enesimo);

    printf("%d %d ",anterior, posterior);

    for(i = 1; i <= (enesimo - 2); i++){
        printf("%d ",anterior + posterior);
        aux = posterior + anterior;
        anterior = posterior;
        posterior = aux; 
    }
    printf("\n");
    return 0;
}