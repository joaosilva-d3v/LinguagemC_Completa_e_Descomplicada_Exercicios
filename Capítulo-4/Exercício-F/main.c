/*6) Faça o programa que receba a altura e o sexo de uma pessoa e calcule e mostre 
seu peso ideal, utilizando as seguintes formulas (em que "h" corresponde à altura):
I.Homens (72,7 * h) - 58
II.Mulheres (62,1 * h) - 44,7*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f",&altura);

    printf("Qual o seu sexo (m/f): ");
    scanf("%s",&sexo);

    printf("Sexo = %c\n",sexo);


    if(sexo == 'm' || sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %0.3fKg\n",peso_ideal);
    }
    else{
        if(sexo == 'f' || sexo == 'F'){
            peso_ideal = (62.1 * altura) - 44.;
            printf("Seu peso ideal é: %0.3fKg\n",peso_ideal);
        }
    }
    

    return 0;
}