/*15) Faça um programa para ler um número inteiro positivo de três digitos. 
Em seguida, calcule e mostre o número formado pelos digitos invertidos do 
número lido. Exemplo: Número lido = 123, Número gerado = 321*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num, unidade, dezena, centena, inverso;
    printf("Dgite um valor inteiro de três digitos: ");
    scanf("%d",&num);

    //Unidade recebe o resto da divisão de num por 100, obtendo assim o ultimo elemento de num.
    unidade = (num%10);
    //Dezena recebe resto da divisão por 100 dividido por 10
    dezena = (num%100/(10));
    //Centena recebe num dividido por 100
    centena = (num/100);
    inverso = (unidade*100) + (dezena*10) + centena;

    printf("%d inverso é : %d\n",num, inverso);

    return 0;
}