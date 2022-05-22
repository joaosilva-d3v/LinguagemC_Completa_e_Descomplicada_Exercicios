/*13) Crie uma enumeração representando os meses do ano. Agora, escreva um programa que leia um valor 
inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.*/

#include <stdio.h>
#include <stdlib.h>

enum meses{janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, 
novembro, dezembro};


int main(){
    int mes;
    printf("Digite um valor para um mês do ano: ");
    scanf("%d",&mes);

    if(mes >= janeiro && mes <= dezembro){
        switch(mes){
            case janeiro:
            printf("%d - Janeiro.\n",janeiro);
            break;

            case fevereiro:
            printf("%d - Fevereiro.\n",fevereiro);

            case marco:
            printf("%d - Março.\n",marco);
            break;

            case abril:
            printf("%d - Abril.\n",abril);
            break;

            case maio:
            printf("%d - Maio\n",maio);
            break;

            case junho:
            printf("%d - Junho\n",junho);
            break;

            case julho:
            printf("%d - Julho\n",julho);
            break;

            case agosto:
            printf("%d - Agosto\n",agosto);
            break;

            case setembro:
            printf("%d - Setembro\n",setembro);
            break;

            case outubro:
            printf("%d - Outubro\n",outubro);
            break;

            case novembro:
            printf("%d - Novembro\n",novembro);
            break;

            case dezembro:
            printf("%d - Dezembro\n",dezembro);
            break;
        }
    }else{
        printf("Valor inválido.\n");
        printf("Os valores validos são: \n");
        for(mes = janeiro; mes <= dezembro; mes++){
            printf("mes: %d\n",mes);
        }
    }
    return 0;
}