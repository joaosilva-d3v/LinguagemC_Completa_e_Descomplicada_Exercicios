/*13) Faça um programa que mostre ao usuário um menu com quatro operações matemáticas
(as operações basicas, por exemplo). O usuário escolhe uma das opções, e seu programa
pede dois valores numéricos e realiza a operação, mostrando o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char op;
    float a, b, resultado;
    printf("   Escolha uma operação\n[+]adição     [-]Subtração\n[*]Vezes      [/]Divisão\nOpção: ");
    op = getchar();
    printf("Digite dois valores: ");
    scanf("%f %f",&a,&b);

    if( op == '+'){
        resultado = a + b;
    }else{
        if(op == '-'){
            resultado = a - b;
        }else{
            if(op == '*'){
                resultado = a * b;
            }else{
                if(op == '/'){
                    resultado = a / b;
                }else{
                    printf("Opção invalida!\n");
                }
            }
        }
    }
    printf("O resultado da operação foi de: %0.2f\n",resultado);

    return 0;
}