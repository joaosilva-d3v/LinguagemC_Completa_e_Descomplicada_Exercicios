/*15) Elabore um programa que faça a leitura de varios números inteiros até que se digite 
um número negativo. O programa tem que retornar o maior e o menor número lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){


    int valor_lido, maior, menor, verificador = 1;

    printf("Digite o 1º valor: ");
    scanf("%d",&valor_lido);
    maior = valor_lido;
    menor = valor_lido;

    do{
        verificador++;

        printf("Digite o %dº valor:", verificador);
        scanf("%d",&valor_lido);
        
        if(valor_lido < 0){
            break;
        }

        if(maior < valor_lido){
            maior = valor_lido;
        }
        if(menor > valor_lido){
            menor = valor_lido;
        }

    } while(valor_lido > 0);

    printf("MAIOR = %d\n",maior);
    printf("MENOR = %d\n",menor);
    

    return 0;
}