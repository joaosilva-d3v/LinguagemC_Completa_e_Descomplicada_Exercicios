/*6) Leia uma velocidade em km/h e apresente convertida em m/s. A Fórmula
de conversão é M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float km_h, m_s;

    printf("Digite uma velocidade em Km/h: ");
    scanf("%f",&km_h);
    m_s = km_h/3.6;
    printf("M/s: %f \n",m_s);

    return 0;
}