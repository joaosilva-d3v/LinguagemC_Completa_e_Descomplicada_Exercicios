/*7) Crie uma estruta representando uma hora. Essa estrutura deve conter os campos hora, minutos 
e segundos. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e 
imprima a maior hora.*/

#include <stdio.h>
#include <stdlib.h>
 typedef struct{
    int hora;
    int minutos;
    int segundos;
}horas;
int main(){
    horas hr[5];
    char aux[20];
    int i, maior_hora, verificador;

    for(i =0; i < 5; i++){
        printf("... DIGITE O %dº HORÁRIO...\n",i+1);
        do{
            printf("HORA......");
            scanf("%d",&hr[i].hora);
            printf("MINUTOS...");
            scanf("%d",&hr[i].minutos);
            printf("SEGUNDOS..");
            scanf("%d",&hr[i].segundos);
            printf("%d:%d:%d h\n",hr[i].hora,hr[i].minutos,hr[i].segundos);
            if(hr[i].hora > 24 || hr[i].minutos > 60 || hr[i].segundos > 60){
                printf("Hora invalída. Tente novamente.\nFormato das horas ígual à 24h\n");
            }
        }while(hr[i].hora > 24 || hr[i].minutos > 60 || hr[i].segundos > 60);
    }
    maior_hora = hr[0].hora;
    for(i = 0; i < 5; i++){
        if(maior_hora < hr[i].hora){
            maior_hora = hr[i].hora;
            verificador = i;
        }
    }
    printf("....MAIOR HORA DIGITADA....\n");
    printf(" .......%d:%d:%d h........\n",hr[verificador].hora, hr[verificador].minutos, hr[verificador].segundos);
    
    return 0;
}