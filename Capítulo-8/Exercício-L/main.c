/*12) Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia
um valor inteiro do teclado e exiba o dia da semana correspondente.*/

#include <stdio.h>
#include <stdlib.h>

enum dias{Domingo = 1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};


int main(){
    int dia;
    printf("Digite um valor para um dia da semana: ");
    scanf("%d",&dia);

    if(dia >= Domingo && dia <= Sabado){
        switch(dia){
            case Domingo:
            printf("%d - Domingo.\n",Domingo);
            break;

            case Segunda:
            printf("%d - Segunda.\n",Segunda);

            case Terca:
            printf("%d - Terça.\n",Terca);
            break;

            case Quarta:
            printf("%d - Quarta.\n",Quarta);
            break;

            case Quinta:
            printf("%d - Quinta\n",Quinta);
            break;

            case Sexta:
            printf("%d - Sexta.\n",Sexta);
            break;

            case Sabado:
            printf("%d - Sabádo.\n",Sabado);
            break;
        }
    }else{
        printf("Valor inválido.\n");
        printf("Os valores validos são: \n");
        for(dia = Domingo; dia <= Sabado; dia++){
            printf("DIA: %d\n",dia);
        }
    }
    return 0;
}