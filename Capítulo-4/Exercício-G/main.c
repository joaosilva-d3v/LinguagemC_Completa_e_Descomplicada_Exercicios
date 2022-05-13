/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma
taxa diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor
e o estado de destino do produto e o programa retorne o preço final do produto acrescido do 
imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrará uma
mensagem de erro.

ESTADO       MG      SP      RJ      MS
IMPOSTO.     7%      12%     15%     8%*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){

    int estado;
    float produto, preco_final;

    printf("Digite o valor do produto R$");
    scanf("%f",&produto);
    printf("Digite o estado \n");
    printf("[1]-MG  [2]-SP\n[3]-RJ  [4]-MS\nOpção:");
    scanf("%d",&estado);

    switch(estado){
        case 1:
            preco_final = (produto+((produto/100)*7));
            printf("O valor do produto para o estado de MG é de R$%f\n",preco_final);
            break;
        case 2:
             preco_final = (produto+((produto/100)*12));
             printf("O valor do produto para o estado de SP é de R$%f\n",preco_final);
            break;
        case 3:
            preco_final = (produto+((produto/100)*15));
            printf("O valor do produto para o estado de RJ é de R$%f\n",preco_final);
            break;
        case 4:
            preco_final = (produto+((produto/100)*8));
            printf("O valor do produto para o estado de MS é de R$%f\n",preco_final);
            break;
        default:
            printf("ERRO! \nEstado inválido.\n");
    }
    return 0;
}