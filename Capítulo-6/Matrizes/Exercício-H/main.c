/*8) Calcular e imprimir na tela uma matriz de tamanho 10x10, em que seus elementos são da forma: i > j 
a[i][j] = 2i + 7j se i < j a[i][j] = 3i² - 1 se i = j a[i][j] = 4i³ + 5j² + 1*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float matriz[10][10];
    int i, j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] = 0;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(i < j){
                matriz[i][j] = (3*(i*i)-1);
            }else{
                if(i == j){
                    matriz[i][j] = (4*(i*(i*i)+5*(j*j)+1));
                }else{
                    if(i > j){
                        matriz[i][j] = (2*i + 7*j - 2);
                    }
                }
            }
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("[%.1f]      ",matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}