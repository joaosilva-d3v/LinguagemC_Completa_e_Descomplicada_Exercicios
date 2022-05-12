/*4) leia quatro valores do tipo float. Calcule e 
exiba a média aritmética desses valores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, c, d, media;
    printf("Digite quatro valores para obter sua média aritmética: ");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    media = (a+b+c+d)/4;
    printf("A média é de: %0.2f \n",media);

    return 0;
}