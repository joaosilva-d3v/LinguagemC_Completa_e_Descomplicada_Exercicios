/*8) Escreva um programa que, dada a idade de um nadador, classifique-o em
uma das seguintes categorias:

CATEGORIAS          IDADE
Infantil A          5-7
Infantil B          8-10
Juvenil A           11-13
Juvenil B           14-17
Sênior              maiores de 18 anos*/   

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >= 5 && idade <= 7){
        printf("CATEGORIA: Infantil A\n");
    }else{
        if(idade >=8 && idade <= 10){
            printf("CATEGORIA: Infantil B\n");
        }else{
            if(idade >= 11 && idade <= 13){
                printf("CATEGORIA: Juvenil A\n");
            }else{
                if(idade >= 14 && idade <= 17){
                    printf("CATEGORIA: Juvenil B\n");
                }else{
                    if(idade >= 8){
                        printf("CATEGORIA: Sênior\n");
                    }
                }
            }
        }
    }

    return 0;
}