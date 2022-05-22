/*5) Usando a estrutura retângulo do exercício anterior, faça um programa que 
declare e leia uma estrutura retângulo e um ponto, e informe se esse ponto está 
dentro do retângulo*/

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
struct ponto{
    int xa, ya;
};
int main(){
    struct retangulo ret;
    struct ponto pt;
    int aux = 0;

    do{
        printf(".....COORDENADAS RETÂNGULO.....\n\n");
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

    printf("Digite a posição Xa: ");
    scanf("%d",&pt.xa);
    printf("Digite a posição Ya: ");
    scanf("%d",&pt.ya);

    if(!(pt.xa >= ret.sup.xa && pt.xa <= ret.inf.xb)){
        printf("Ponto fora do retângulo.\n");
    }else{
        if(!(pt.ya >= ret.sup.ya && pt.ya <= ret.inf.yb)){
            printf("Ponto fora do retângulo.\n");
        }else{
            printf("POnto dentro do retângulo.\n");
        }
    }
    return 0;
}