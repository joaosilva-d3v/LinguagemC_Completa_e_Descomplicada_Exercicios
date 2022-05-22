/*4) Crie uma estrutura chamda retângulo. Essa estrutura deverá conter o ponto superior esquerdo
e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura ponto, a qual contém
as posições X e Y. Faça um programa que declare e leia uma estrutura retângulo e exiba a aréa e o comprimento
da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct superior_esq{
    int xa, ya;
};
struct inferior_dir{
    int xb, yb;
};
struct retangulo{
    struct superior_esq sup;
    struct inferior_dir inf;
};
int main(){
    struct retangulo ret;
    float diag = 0, area = 0, per = 0, aux = 0;

    do{
        printf("...........COORDENADAS...........\n\n");
        printf("..Ponto superior esquerdo..\n");
        printf("Xa: ");
        scanf("%d",&ret.sup.xa);
        printf("Ya: ");
        scanf("%d",&ret.sup.ya);

        printf("..Ponto inferior direito..\n");
        printf("Xb: ");
        scanf("%d",&ret.inf.xb);
        printf("Yb: ");
        scanf("%d",&ret.inf.yb);

        if(ret.inf.yb >= ret.sup.ya || ret.sup.xa >= ret.inf.xb || ret.inf.xb == ret.sup.ya){
            printf("Valores inválidos para formar um retângulo. Tente novamente.\n");
        }else{
            aux = 1;
        }

    }while(aux == 0);

    area = (ret.inf.xb - ret.sup.xa) * (ret.sup.ya - ret.inf.yb);
    diag = sqrt(pow((ret.inf.xb - ret.sup.xa),2)+pow((ret.inf.yb - ret.sup.ya),2));
    per = 2*((ret.inf.xb - ret.sup.xa)+(ret.sup.ya - ret.inf.yb));

    printf("Diagonal.....%.2f\n",diag);
    printf("Área.........%.2f\n",area);
    printf("Perímetro....%.2f\n",per);

    return 0;
}