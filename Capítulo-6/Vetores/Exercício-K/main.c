/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o 
quadrado de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os 
conjuntos têm, no maximo 20 elementos. Imprima os dois conjuntos númericos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float v1[20], v2[20];
    int i;

    for(i = 0; i < 20; i++){
        v1[i] = 0;
        v2[i] = 0;
    }

    for(i = 0; i < 20; i++){
        printf("Digite o %dº valor: ",i+1);
        scanf("%f",&v1[i]);
        v2[i] = v1[i]*v1[i];
    }

    printf("Conjunto vetor 1 \n");
    for(i = 0; i < 20; i++){
        printf("%.2f ",v1[i]);
    }
    printf("\n");
    printf("Conjunto vetor 2 (ao quadrado)\n");
    for(i = 0; i < 20; i++){
        printf("%.2f ",v2[i]);
    }
    printf("\n");

    return 0;
}