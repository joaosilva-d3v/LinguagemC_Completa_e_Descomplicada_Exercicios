/*8) Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia o os dados de 6 pessoas. Calcule e exiba os nomes da pessoa
mais nova e da mais velha.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    int idade;
} dados;
int main(){
    dados item[3];
    char aux[50];
    int mais_velha = 0, mais_nova, i;
    int velha, nova;

    printf("...INFORME OS DADOS...\n");
    printf("NOME:\t");
    fgets(item[0].nome, sizeof(item[0].nome), stdin);
    printf("IDADE:\t");
    fgets(aux, sizeof(aux), stdin);
    item[0].idade = atoi(aux);
    mais_nova = item[0].idade;
    printf("______________________\n");

    for(i = 1; i < 3; i++){
        printf("...INFORME OS DADOS...\n");
        printf("NOME:\t");
        fgets(item[i].nome, sizeof(item[0].nome), stdin);
        printf("IDADE:\t");
        fgets(aux, sizeof(aux), stdin);
        item[i].idade = atoi(aux);
        mais_nova = item[i].idade;
        printf("______________________\n");
    }
    for(i = 0; i < 3; i++){
        if(mais_nova > item[i].idade){
            mais_nova = item[i].idade;
            nova = i;
        }
        if(mais_velha < item[i].idade){
            mais_velha = item[i].idade;
            velha = i;
        }
    }
    printf("PESSOA MAIS NOVA:\t%s",item[nova].nome);
    printf("PESSOA MAIS VELHA:\t%s\n",item[velha].nome);
    
    return 0;
}