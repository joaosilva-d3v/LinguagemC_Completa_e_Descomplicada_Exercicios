/*13) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
Os numeros deveram ser armazenados no vetor na ordem que forem lidos, sendo que, caso o 
usuario digite um número que ja foi digitado, o programa deverá pedir a ele para digitar 
outro numero. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, 
verificando se ele existe entre os números que já foram digitados. Exiba na tela o vetor
final que foi digitado.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int vetor[10] = {0}, i, j = 0, verificador, provados9 = 0;
    do{
        printf("Digite um valor: ");
        scanf("%d",&verificador);
        for(i = 0; i <= j; i++){
            if(verificador == vetor[i]){
                provados9 += 1;
            }
        }
        if(provados9 != 0){
            printf("Valor já digitado. Tente novamente.\n");
            provados9 = 0;
        }else{
            vetor[j] = verificador;
            j++;
        }
    }while(vetor[9] == 0);
    for(i = 0; i < 10; i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    return 0;
}