/*17) Escreva um programa que leia um número inteiro positivo N e em seguida imprima N
linhas do chamado triangulo de Floyd:

1
2   3
4   5   6   
7   8   9   10  
11  12  13  14  15 
16  17  18  19  20  21*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, n, aux = 1;

    printf("Digite um valor para o triângulo de Floyd: ");
    scanf("%d",&n);

    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            printf("%d  ", aux);
            ++aux;
        }
        printf("\n");
    }
    return 0;
}