/*6) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o 
número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa que 
leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as notas
do aluno que possui a maior média geral dentre os cinco.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
};

int main(){
    struct cadastro cad[5];
    char aux[50];
    int i, j, identificador = 0;
    float melhor_media;

    printf("........CADASTRO DE ALUNO........\n\n");
    for(i = 0; i < 5; i++){
        cad[i].media = 0;
        printf("Número da matrícula......");
        fgets(aux, sizeof(aux), stdin);
        cad[i].matricula = atoi(aux);
        printf("Nome do aluno............");
        fgets(cad[i].nome, sizeof(cad[i].nome), stdin);
        cad[i].nome[strlen(cad[i].nome) - 1] = 0;
        for(j = 0; j < 3; j++){
            printf("Nota %d...................",j+1);
            fgets(aux, sizeof(aux), stdin);
            cad[i].notas[j] = atoi(aux);
            cad[i].media += (cad[i].notas[j]/3);
        }
        printf("________________________________\n\n");

    }
    melhor_media = cad[0].media;

    for(i = 0; i < 5; i++){
        if(melhor_media < cad[i].media){
            melhor_media = cad[i].media;
            identificador = i;
        }
    }
    
    for(i = 0; i < 5; i++){
        printf("|Média %s\t\t  %.2f|\n",cad[i].nome, cad[i].media);
    }

    printf("...ALUNO COM AS MELHORES NOTAS...\n");
    printf("NOME.............%s\n",cad[identificador].nome);
    for(i = 0; i < 3; i++){
        printf("NOTA %d...........%.2f\n",i+1, cad[identificador].notas[i]);
    }
    printf("MÉDIA............%.2f\n",melhor_media);

    return 0;
}