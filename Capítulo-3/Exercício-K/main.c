/*11) Leia o valor do raio de um circulo. Calcule e imprima a área do circulo correspondente.
A área do circulo é A = π * raio ^ 2, sendo π = 3.141592*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI  3.141592

int main(){
    
    float raio, area;

    printf("Digite o valor de um raio: ");
    scanf("%f",&raio);

    area = PI * (pow(raio,2));

    printf("Área do circulo: %f\n",area);

    return 0;
}