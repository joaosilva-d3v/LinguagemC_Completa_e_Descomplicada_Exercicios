/*8) Leia um valor que represente uma temperatura em graus Celcios e apresente-a convertida 
em graus Fahrenheit. A Formula de conversão é F = C * (9.0/5.0) + 32.0, sendo
F a temperatura em Fahrenheit e C a temperatura em Celcios.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float c, f;
    printf("Digite uma temperatura em °C");
    scanf("%f",&c);
    f = c * (9.0/5.0) + 32.0;
    printf("A temperatura em graus fahrenheit é %0.2f°F \n",f);

    return 0;
}