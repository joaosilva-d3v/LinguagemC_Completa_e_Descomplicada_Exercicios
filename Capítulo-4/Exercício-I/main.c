/*9) Faça um programa que leia o peso e a altura de uma pessoa. De acordo com a 
tebela a seguir, verifique e mostre qual a classificação dessa pessoa.

-                                            PESO                             -
-ALTURA                   ATÉ 60      ENTRE 60-90(INCLUSIVE)      ACIMA DE 90 -
-------------------------------------------------------------------------------
-Menor do que 1,20           A                   D                    G       -
-1,20-1,70                   B                   E                    H       -
-Maior do que 1,80           C                   F                    I       -*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    float peso, altura;
    printf("Digite sua altura em metros :");
    scanf("%f",&altura);
    printf("Digite seu peso em quilos: ");
    scanf("%f",&peso);

    if(altura < 1.20 && peso <= 60){
        printf("Classificação: A\n");
    }else{
        if(altura < 1.20 && (peso >= 61 && peso <= 90)){
            printf("Classificção: D\n");
        }else{
            if(altura < 1.20 && peso > 90){
                printf("Classificação: G\n");
            }else{
                if((altura >= 1.20 && altura <= 1.70) && peso <= 60){
                    printf("Classificação: B\n");
                }else{
                    if((altura >= 1.20 && altura <= 1.70)&&(peso >= 61 && peso <= 90)){
                        printf("Classificação: E\n");
                    }else{
                        if((altura >= 1.20 && altura <= 1.70) && peso >= 91){
                            printf("Classificação: H\n");    
                        }else{
                            if(altura > 1.71 && peso <= 60){
                                printf("Classificação: C\n");
                            }else{
                                if(altura > 1.71 && (peso >= 61 && peso <= 90)){
                                    printf("Classificação: F\n");
                                }else{
                                    if(altura > 1.71 && peso >= 91){
                                        printf("Classificação: I\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}