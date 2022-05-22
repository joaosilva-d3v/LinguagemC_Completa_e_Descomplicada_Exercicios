/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto_a{
    int xa, ya;
};
struct ponto_b{
    int xb, yb;
};

int main(){
    float dist;
    struct ponto_a a;
    a.xa = 5;
    a.ya = 5;
    struct ponto_b b;

    printf("..DIGITE AS COORDENADAS DE UM PONTO..\n\n");
    printf("Posição X: ");
    scanf("%d",&b.xb);
    printf("Posição Y: ");
    scanf("%d",&b.yb);

    dist = sqrt(pow((b.xb - a.xa),2) + pow((b.yb - a.ya),2));

    printf("A distância entre os pontos a(%d,%d) e b(%d,%d) é = %.2f\n",a.xa,a.ya,b.xb,b.yb,dist);
    return 0;
}