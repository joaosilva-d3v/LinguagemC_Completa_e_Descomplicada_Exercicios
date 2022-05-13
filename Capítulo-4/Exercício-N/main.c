/*14) Faça um programa para verificar se determinado número inteiro lido é divisivel por 3 ou por 5, mas
não simultaneamente pelos dois.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a, verificador;

    printf("Digite um valor inteiro: ");
    scanf("%d",&a);

    if(a%3 == 0){
        verificador = 3;
    }else{
        if(a%5 == 0){
            verificador = 5;
        }else{
            if(a%3 == 0 && a%5 == 0){
                verificador = 0;
            }
        }
    }

    switch(verificador){
        case 3:{
            printf("Divisivel por 3\n");
        }break;
        case 5:{
            printf("Divisivel por 5\n");
        }break;
        case 0:{
            printf("\n");
        }break;
        default:{
            printf("Não é divisivel por 3 nem por 5.\n");
        }
    }
    return 0;
}