/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida , declare e leia do teclado um ponto e exiba a distância dele até a origem das 
coordenadas isto é, a posição (0,0).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenadas{
    int xa, ya;
};

int main(){         
    struct coordenadas ponto;
    float distancia;

    printf("..DIGITE O VALOR DAS COORDENADAS..\n\n");
    printf("Coordenada X: ");
    scanf("%d",&ponto.xa);
    printf("Coordenada Y: ");
    scanf("%d",&ponto.ya);

    distancia = sqrt(pow((ponto.xa - 0),2)+pow((ponto.ya),2));

    printf("Distancia entre o ponto (%d,%d) até a origem = %.2f\n",ponto.xa, ponto.ya, distancia);
    
    return 0;
}