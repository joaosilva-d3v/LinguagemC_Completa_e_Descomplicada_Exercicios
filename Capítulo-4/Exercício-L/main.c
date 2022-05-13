/*12)Usando o comando SWITCH, escreva um programa que leia um inteiro entre 1 e 7 e imprima 
o dia da semana correspondente a esse número. Isto é, se 1, segunda-feira, se 2, terca-feira, 
e assim por diante.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int dia;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d",&dia);

    switch(dia){
        case 1:{
            printf("Domingo\n");
        }break;
        case 2:{
            printf("Segunda-feira\n");
        }break;
        case 3:{
            printf("Terça-feira\n");
        }break;
        case 4:{
            printf("Quarta-feira\n");
        }break;
        case 5:{
            printf("Quinta-feira\n");
        }break;
        case 6:{
            printf("Sexta-feita\n");
        }break;
        case 7:{
            printf("Sábado\n");
        }break;

    default:
        printf("Opção inválida!\n");
    }


    return 0;
}