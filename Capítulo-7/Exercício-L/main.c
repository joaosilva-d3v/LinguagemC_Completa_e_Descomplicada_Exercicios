/*12) Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor
a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor 
a ser pago á vista.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char produto[30];
    float Valor, valor_c_desc;

    printf("PRODUTO: ");
    fgets(produto, 30, stdin);
    printf("VALOR R$ ");
    scanf("%f",&Valor);
    valor_c_desc = (Valor/100)*90;

    printf("------------------------------\n");
    printf("%s",&produto);
    printf("------------------------------\n");
    printf("Total R$ %.2f\n",Valor);
    printf("Total c/ desconto R$ %.2f\n\n",valor_c_desc);
    printf("*Desc. de 10%% em pag. à vista.\n");
    printf("------------------------------\n");

    return 0;
}