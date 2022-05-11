/*15) Escreva um programa que leia três variáveis: char, int e float. Em seguida,
imprima-as de três maneiras diferentes: separadas por espaços, por uma tabulação
horizontal e uma em cada linha. Use um unico comando de printf() para cada operação
de escrita das três variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char a;
    int b;
    float c;

    printf("Digite um caractere, um tipo inteiro e um tipo float, respectivamente: ");
    scanf("%c %d %f",&a,&b,&c);

    printf("%c %d %f\n",a, b, c);
    printf("%c  %d  %f\n", a, b, c);
    printf("%c \n%d \n%f\n",a, b, c);

    return 0;
}