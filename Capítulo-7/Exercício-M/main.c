/*13) Escreva um programa que receba uma string S e dois valores inteiros não nagativos
i e j. Em seguida, imprima os caracteres contidos no sgmento que vai de i a j da string S.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char s[20];
    int i, j, k;

    printf("Digite uma string qualquer: ");
    fgets(s, 20, stdin);

    do{
        printf("Digite dois valores para i e j respectivamente: ");
        scanf("%d%d",&i, &j);
        if(i > strlen(s)&j > strlen(s)){
            printf("Valolres fora da faixa. \nTente novamente.\n");
        }
    }while(i > strlen(s) & j > strlen(s));
    printf("Caracteres de i até j: \n");

    for(i; i <= j; i++){
        printf("%c",s[i]);
    }
    printf("\n");

    return 0;
}