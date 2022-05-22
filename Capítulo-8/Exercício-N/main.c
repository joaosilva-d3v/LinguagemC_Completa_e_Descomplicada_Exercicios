/*14) Crie uma enumeração representando os itens de um alista de compras. Agora, ecreva um programa 
que leia um valor inteiro do teclado e exiba o nome do item comprado e o seu preço.*/

#include <stdio.h>
#include <stdlib.h>
enum lista_de_compras{bananakg= 1, leite, farinha, chocolate, fermento, duziadeovos, manteiga};


int main(){
    int item, aux = 0;
    do{
        printf("Digite um valor de à 7: ");
        scanf("%d",&item);
    
        if(item >= bananakg && item <= manteiga){
            switch (item){
                case bananakg:
                printf("%d - Banana\tR$1.89\n", bananakg);
                aux = 1;
                break;

                case leite:
                printf("%d - Leite\tR$4.29\n",leite);
                aux = 1;
                break;

                case farinha:
                printf("%d - Farinha\tR$3.89\n",farinha);
                aux = 1;
                break;

                case chocolate:
                printf("%d - Chocolate\tR$5.49\n",chocolate);
                aux = 1;
                break;

                case fermento:
                printf("%d - Fermento\tR$3.19\n",fermento);
                aux = 1;
                break;

                case duziadeovos:
                printf("%d - Ovos 12un\tR$9.49\n",duziadeovos);
                aux = 1;
                break;

                case manteiga:
                printf("%d - Manteiga\tR$8.49\n",manteiga);
                aux = 1;
                break;
            }
        }else{
            printf("Valor do item inválido. \nTente novamente.\n");
        }
    }while(aux == 0);
    return 0;
}