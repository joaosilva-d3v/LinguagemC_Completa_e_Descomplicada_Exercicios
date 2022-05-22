/*1) Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene 
esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    long int cep;
    char bairro[50];
    char rua[50];
    int numero;
};
struct cadastro{
    char nome[50];
    int idade;
    struct endereco dados;
};

int main(){

    struct cadastro cad_unico;
    char aux[50];

    //aqui pegamos os dados do nome.
    printf("NOME: ");
    fgets(cad_unico.nome, sizeof(cad_unico), stdin);
    cad_unico.nome[strlen(cad_unico.nome) - 1] = 0;
    //aqui pegamos o dados da idade.
    printf("IDADE: ");
    fgets(aux, sizeof(aux), stdin);
    cad_unico.idade = atoi(aux);
    //aqui pegamos o dado cep de struct endereco.
    printf("CEP: ");
    fgets(aux, sizeof(aux), stdin);
    cad_unico.dados.cep = atoi(aux);
    //aqui pegamos o dado bairro de struct endereco.
    printf("BAIRRO: ");
    fgets(cad_unico.dados.bairro, sizeof(cad_unico.dados.bairro), stdin);
    cad_unico.dados.bairro[strlen(cad_unico.dados.bairro) - 1] = 0;
    //aqui pegamos o dado rua de struct endereco.
    printf("RUA: ");
    fgets(cad_unico.dados.rua, sizeof(cad_unico.dados.rua), stdin);
    cad_unico.dados.rua[strlen(cad_unico.dados.rua)  - 1] = 0;
    //aqui pegamos o dado numero de struct endereco.
    printf("NÚMERO ");
    fgets(aux, sizeof(aux), stdin);
    cad_unico.dados.numero = atoi(aux);

    printf("-------------------------\n");
    printf("...CONFIRME SEUS DADOS...\n\n");
    printf("NOME.............%s\n",cad_unico.nome);
    printf("IDADE............%d\n",cad_unico.idade);
    printf("CEP..............%ld\n",cad_unico.dados.cep);
    printf("BAIRRO...........%s\n",cad_unico.dados.bairro);
    printf("RUA..............%s\n",cad_unico.dados.rua);
    printf("NÚMERO...........%d\n",cad_unico.dados.numero);

    printf("\n");
    return 0;
}