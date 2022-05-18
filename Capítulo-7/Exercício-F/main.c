/*6) leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre 
com um cactere (vogal ou consoante), e substitua todas as vogais da palavra dada por esse 
caractere. Ao final imprima a nova string e o número de vogais que ela possui.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[30], caractere;
    int i, cont = 0;

    printf("Digite uma string qualquer: ");
    fgets(str, 30, stdin);
    printf("Digite um caractere qualquer: ");
    scanf("%c",&caractere);

    for(i = 0; i < strlen(str) - 1; i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'){
            cont += 1;
            str[i] = caractere;
        }else{
            if(str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'){
                cont += 1;
                str[i] = caractere;
            }
        }
    }

    printf("Quantidades de vogais: %d\n",cont);
    printf("String com as vogais trocadas pelo caractere digitado: ");
    fputs(str, stdout);

    return 0;
}