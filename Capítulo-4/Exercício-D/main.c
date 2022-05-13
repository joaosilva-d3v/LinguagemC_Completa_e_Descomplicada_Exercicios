/*4) Faça um programa que leia o sálario de  um trabalhador e o valor da prestação de um
empréstimo. Se a prestação:
I. For maior que 20% do sálario, Imprima "Empréstimo não concedido."
II. Caso contrário, imprima: "Emprestimo concedido."*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salario, prestacao, controle;
    printf("Digite o sálario do trabalhador R$");
    scanf("%f",&salario);
    printf("Digite o valor da prestação R$");
    scanf("%f",&prestacao);

    controle = ((salario/100)*20);

    if (prestacao > controle){
        printf("Empréstimo não concedido.\n");
    }
    else{
        printf("Empréstimo concedido.\n");
    }

    printf("Controle de R$%0.2f\n",controle);

    return 0;
}