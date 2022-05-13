/*15) Faça um programa que leia os coeficientes de uma equação do segundo grau. 
Em seguida, calcule e mostre as raizes dessa equação, lembrando que as raizes
são calculadas como 

x = (-b±√Δ)/2*a

em que Δ = b²-4*a*c e ax²+bx+c = 0 representa uma equação do segundo grau. A variavél
a tem de ser diferente de zero. Casa seja igual imprima a mensagem "Não é equação de 
segundo grau". Do contrario, imprima:

° Se Δ < 0, não existe real. Imprima a mensagem "Não existe raiz".
° Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única"
° Se Δ > 0, existe duas raizes reais. Imprima as raízes */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2, delta;
    printf("Digite o valor de A, B e C respectivamente: ");
    scanf("%f %f %f",&a,&b,&c);

    delta = b*b-4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    if(delta < 0){
        printf("Sem raizes reais.\n");
    }else{
        if(delta == 0){
            printf("Raiz única\n");
            printf("Raiz x': %0.2f\n",x1);
        }else{
            if(delta > 0){
                printf("Existem duas raízes reais:\n");
                printf("Raiz X': %0.2f\n",x1);
                printf("Raiz X\": %0.2f\n",x2);
            }
        }
    }

    printf("DELTA: %0.2f\n",delta);
    return 0;
}