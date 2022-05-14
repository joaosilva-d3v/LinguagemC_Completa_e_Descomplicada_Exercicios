/*16) Em matemática, o número harmônico designado por Hn define-se como o énesimo
termo da série harmônica. Ou seja:

Hn = 1 + 1/2 + 1/3 +1/4 ... + 1/n

Apresente um programa que calcule o valor de qualquer Hn.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float hn = 1;
    int i, j;
    printf("Digite um valor: ");
    scanf("%d",&j);

    for(i = 2; i <= j; i++){
        hn += (1/(float)i);  
    }
    printf("Hn = %f\n",hn);

    return 0;
}