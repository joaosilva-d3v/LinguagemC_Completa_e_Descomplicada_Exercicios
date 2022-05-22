/*9) Crie uma estrutura representando um atleta. Essa estrutura deve contaer o nome do atleta, seu
esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas. Calcule e 
exiba os nomes do atleta mais alto e do mais velho. */

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
    atleta info[5];
    char aux[50];
    int i, idade = 0, aux1, aux2;
    float altura = 0;


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

        if(altura < info[i].altura){
            altura = info[i].altura;
            aux1 = i;
        }
        if(idade < info[i].idade){
            idade = info[i].idade;
            aux2 = i;
        }
    }
    printf("\n");

    printf("ATLETA MAIS ALTO\t%s",info[aux1].nome);
    printf("ATLETA MAIS VELHO\t%s",info[aux2].nome);



    return 0;
}