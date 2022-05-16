/*10) Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em três provas. Em 
seguida calcule e escreva na tela o número de alunos cuja  pior nota nota foi na prova 1,
o número de alunos cuja pior nota nota foi na prova 2 e o número de alunos cuja pior nota 
foi na prova 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float notas[10][3];
    int i, j, cont = 1, piores[3];

    for(j = 0; j < 3; j++){
        piores[j] = 0;
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("Digite o %dº valor: ",cont);
            scanf("%f",&notas[i][j]);
            if(notas[i][j] < 6.0){
                piores[j] += 1;
            }
            cont += 1;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 3; j++){
            printf("[%.2f]    ",notas[i][j]);
        }
        printf("\n");
    }
    

    for(j = 0; j < 3; j++){
        printf("Quantidade de piores notas na prova %d: %d\n",j+1, piores[j]);
    }

    
    return 0; 
}