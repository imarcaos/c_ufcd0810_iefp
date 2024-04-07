// UFCD 0810 - Aula 3 - 05/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*

*/

void menu();
void recolhaNotas();
void mostraNotas();
void mediaNotas();
void aprovados();
void reprovados();
void alterarNota();
void notaMaisAlta();

float notas[10];

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                recolhaNotas();
                break;
            case 2:
                mostraNotas();
                break;
            case 3:
                alterarNota();
                break;    
            case 4:                
                mediaNotas();
                break;
            case 5:
                aprovados();
                break;
            case 6:
                reprovados();
                break;      
            case 7:
                notaMaisAlta();
                break;                   
        }
    }while(opcao!=8);
    return 0;
}

void menu(){
        system("cls");
        printf("*** Menu notas de alunos ***\n");
        printf("\n1-Recolha das notas");
        printf("\n2-Mostrar as notas");
        printf("\n3-Alterar nota");
        printf("\n4-Mostrar a média das notas");
        printf("\n5-Contagem dos aprovados (com nota >=10)");
        printf("\n6-Contagem dos reprovados (com nota <10)");
        printf("\n7-Nota mais alta");
        printf("\n8-Sair");
        printf("\nDigite a sua opção:");
}

void recolhaNotas(){
    system("cls");
    printf("Recolha das notas dos alunos\n");
    for(int i=0;i<10;i++){
        do{
            printf("\nDigite a %dª nota:",(i+1));
            scanf("%f",&notas[i]);       
        }while(notas[i]<0 || notas[i]>20);
    }
    printf("\n\nFim da recolha das notas. Aguarde 2 seg., sff\n");
    Sleep(2000);
}
void mostraNotas(){
    system("cls");
    printf("Listagem das notas dos alunos\n");
    for(int i=0;i<10;i++){
        printf("\n%dª nota: %.2f",(i+1),notas[i]);    
    }
    printf("\n\nFim da listagem das notas. Aguarde 3 seg., sff\n");
    Sleep(3000);
}
void mediaNotas(){
    system("cls");
    printf("Média das notas dos alunos\n");
    float soma=0;
    for(int i=0;i<10;i++){
       soma+=notas[i];     
    }
    printf("\nA média das notas é %.2f",(soma/10));
    printf("\n\nFim da média das notas. Aguarde 2 seg., sff\n");
    Sleep(3000);
}
void aprovados(){
    system("cls");
    printf("Contagem dos alunos aprovados\n");
    int contador=0;
    for(int i=0;i<10;i++){
       if(notas[i]>=10){
        contador++;
       }
    }
    printf("\nForam aprovados %d alunos.",contador);
    printf("\n\nFim da contagem dos aprovados. Aguarde 2 seg., sff\n");
    Sleep(3000);
}
void reprovados(){
    system("cls");
    printf("Contagem dos alunos reprovados\n");
    int contador=0;
    for(int i=0;i<10;i++){
       if(notas[i]<10){
        contador++;
       }
    }
    printf("\nForam reprovados %d alunos.",contador);
    printf("\n\nFim da contagem dos reprovados. Aguarde 2 seg., sff\n");
    Sleep(3000);
}
void alterarNota(){
    system("cls");
    printf("Alterar a nota\n");    
    int posicaonota;
    do{
        printf("Indique a posicao da nota que pretende alterar (de 1 a 10):");
        scanf("%d",&posicaonota);
    }while(posicaonota<1 || posicaonota>10);
    printf("\nA nota atual na posição %d é %.2f",(posicaonota),notas[posicaonota-1]);
    do{
        printf("\nDigite a nova nota:");
        scanf("%f",&notas[posicaonota-1]);
    }while(notas[posicaonota-1]<0 || notas[posicaonota-1]>20);
    printf("\n\nNota alterada. Aguarde 3 seg., sff\n");
    Sleep(3000);

}
void notaMaisAlta(){
    system("cls");
    printf("Nota mais alta\n");
    float notamaisalta=0;
    for(int i=0;i<10;i++){
        if(notas[i]>notamaisalta){
            notamaisalta=notas[i];
        }       
    }       
    printf("\nA nota mais alta foi %.2f",notamaisalta);
    printf("\n\nAguarde 3 seg., sff\n");
    Sleep(3000);

}