/*11) Escreva um programa que contenha uma estrutura representando uma data válida. Essa
estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene 
nessa estrutura Calcule e exiba o número de dias que decorrem das duas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data_valida{
    int dia;
    int mes;
    int ano;
}item;

int main(){
    item data[2];
    int i, aux = 0;
    int dias = 0;;

    do{
    printf(".....DATA DD/MM/AAAA.....\n");
        for(i = 0; i < 2; i++){
            printf("DIA\t\t");
            scanf("%d",&data[i].dia);
            printf("MÊS\t\t");
            scanf("%d",&data[i].mes);
            printf("ANO\t\t");
            scanf("%d",&data[i].ano);
            printf("_____________________\n");
            if(data[i].dia > 31 || data[i].mes > 12 || (data[i].ano < 1500 || data[i].ano > 3000 )){
                printf("Data inválida. Tente novamente.\n");
                i -= 1;
            }else{
                aux += 1;
            }
        }
    }while(aux < 2);

    dias = abs((data[0].ano - data[1].ano)*365);
    dias += abs((data[0].dia - data[1].dia));
    dias += abs((data[0].mes - data[1].mes)*30);

    printf("DIAS ≅\t\t%d\n",dias);
    
    return 0;
}