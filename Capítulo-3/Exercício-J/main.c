/*10) A importância de R$ 780.000,00 será dividida entre três ganhadores 
de um concurso, sendo que
I. O primeiro receberá 46% do total
II. O segundo recebeá 32% do total
III. O terceiro receberá o restante
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    const float premio = 780.000;
    float j1, j2, j3;

    j1 = (premio/100)*46;
    j2 = (premio/100)*32;
    j3 = (premio/100)*22;

    printf("O ganhador 1 fica com R$%f\n",j1);
    printf("O ganhador 2 fica com R$%f\n",j2);
    printf("O ganhador 3 fica com R$%f\n",j3);

    return 0;
}