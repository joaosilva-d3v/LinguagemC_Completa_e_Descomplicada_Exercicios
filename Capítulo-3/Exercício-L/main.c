/*12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro.
O volume de um cilindro circular é calculado por meio da sefguinte fórmula: 
V = π * raio  ^ 2 * altura. Em que  π = 3.141592*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define pi 3.141592

int main(){

    float raio, altura, volume;
    printf("Digite a altura do cilindro: ");
    scanf("%f",&altura);
    printf("Digite o raio do cilindro: ");
    scanf("%f",&raio);

    volume = pi * (pow(raio,2)) * altura;

    printf("O volume do cilindro é de: %f\n",volume);

    return 0;
}