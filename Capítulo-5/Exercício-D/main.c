/*4) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3
considerados números maiores que 0.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int mult = 0, i = 1;
    for(i = 1; i <= 5; i++){
        mult = mult + 3;
        printf("%dº múltiplo de 3 = %i\n", i, mult);
    }
    return 0;
}