/*10) Usando a estrutura "atleta", do exercício anterior, escreva um programa que leia 
os dados de 5 atletas e os exiba por ordem dede idade, do mais velho para o mais novo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dados{
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
}atleta;

int main(){
    atleta info[6];
    char aux[50];
    int i, j;

    for(i = 0; i < 5; i++){
        printf(".....DADOS DO ATLETA.....\n");
        printf("NOME\t\t");
        fgets(info[i].nome, sizeof(info[i].nome), stdin);
        printf("ESPORTE\t\t");
        fgets(info[i].esporte, sizeof(info[i].esporte), stdin);
        printf("IDADE\t\t");
        fgets(aux, sizeof(aux), stdin);
        info[i].idade = atoi(aux);
        printf("ALTURA\t\t");
        fgets(aux, sizeof(aux), stdin);
        info[i].altura = atoi(aux);
    }
    for(i = 0; i < 4; i++){
        for(j = i+1; j < 5; j++){
            if(info[i].idade < info[j].idade){
                info[5] = info[i];
                info[i] = info[j];
                info[j] = info[5];
            }
        }
    }

    printf("...ORDEM DECRESCENTE POR IDADE...\n");
    for(i = 0; i < 5; i++){
        printf("NOME:\t\t\t%s",info[i].nome);
    }
    return 0;
}