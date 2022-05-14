/*2) Faça um programa que leia um número inteiro positivo N e imprima os números naturais
 de 0 até N em ordem decrescente.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
     int n, i = 1;
     printf("Digite um valor de contador: ");
     scanf("%d",&n);

     for(i = n; i > 0; i--){
         printf("%d \n",i);
     }
 }