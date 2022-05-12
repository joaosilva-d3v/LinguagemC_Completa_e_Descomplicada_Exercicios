/*9) Leia um ângulo em graus e apresente-o convertido em radianos. A formula de conversão é 
R = G * π/180, sendo G o ângulo em graus e R em radianos e π = 3.141592*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    const float pi = 3.141592;
    float a, r;
    printf("Digite um ângulo em graus: ");
    scanf("%f",&a);
    r = a * (pi/180);
    printf("Conversão em radianos: %0.2f \n",r);

    return 0;
}