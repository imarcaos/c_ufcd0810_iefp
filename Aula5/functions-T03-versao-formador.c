// UFCD 0810 - Aula 5 - 17/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Versao Formador
*/

int marcacoes[10]={0,0,0,0,0,0,0,0,0,0};

void menu();
void marcacao();
void urgente();
void eliminar();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                marcacao();
                break;
            case 2:
                urgente();
                break;    
            case 3:
                eliminar();
                break;                 
 
        }
    }while(opcao!=9);
    return 0;
}

void menu(){
        system("cls");
        printf("Clinica Quebra-Ossos\n");
        printf("Registo de marcações\n\n");
        printf("----------------------------------------\n");
        printf("  1|  2|  3|  4|  5|  6|  7|  8|  9| 10|\n");
        printf("----------------------------------------\n");
        for(int i=0;i<10;i++){
            printf("%3d|",marcacoes[i]);
        }
        printf("\n------------------------------------------\n");
        printf("\n1-Realizar marcação");
        printf("\n2-Marcação de urgência");
        printf("\n3-Eliminar a marcação");
        printf("\n9-Terminar o programa");
        printf("\nDigite a sua opção:");
}

void marcacao(){
    int utente;
    int existe=0;
    system("cls");
    printf("Realizar Marcação\n");
    // ver se a fila está cheia
    if(marcacoes[9]!=0){
        printf("\nA fila está cheia. Aguarde um momento sff.\n");
        Sleep(3000);
        return;
    }

    do{
        printf("\nDigite o nº de utente (1 e 999):");
        scanf("%d",&utente);
    }while(utente<1 || utente>999);
    // ver se o utente já existe na fila
    for(int i=0;i<10;i++){
        if(marcacoes[i]==utente){
            printf("Nº de utente já existe!!!\n");
            existe=1;
            Sleep(3000);
            break;
        }
    }
    if(existe==0){
        // inserir o utente na 1ª posição livre da fila
        for(int i=0;i<10;i++){
            if(marcacoes[i]==0){
                marcacoes[i]=utente;
                break;
            }
        }
        printf("\nMarcação efetuada. Aguarde um momento sff.\n");
        Sleep(3000);
    }
}

void urgente(){
    int utente;
    system("cls");
    printf("Marcação Urgente\n");
    // ver se a fila está cheia
    if(marcacoes[9]!=0){
        printf("\nA fila está cheia. Aguarde um momento sff.\n");
        Sleep(3000);
        return;
    }

    do{
        printf("\nDigite o nº de utente (1 e 999):");
        scanf("%d",&utente);
    }while(utente<1 || utente>999);
    // ver se o utente já existe na fila
    for(int i=0;i<10;i++){
        if(marcacoes[i]==utente){
            printf("Nº de utente já existe!!!\n");
            Sleep(3000);
            return;
        }
    }
    
    // inserir a urgência na 1ª posição
    for(int i=9;i>0;i--){
        marcacoes[i]=marcacoes[i-1];
    }
    marcacoes[0]=utente;
    printf("\nMarcação urgente efetuada. Aguarde um momento sff.\n");
    Sleep(3000);
}
void eliminar(){
    int utente;
    int existe=0;
    system("cls");
    printf("Eliminar Marcação\n");
    do{
        printf("\nDigite o nº de utente (1 e 999):");
        scanf("%d",&utente);
    }while(utente<1 || utente>999);
    // ver se o utente já existe na fila
    for(int i=0;i<10;i++){
        if(marcacoes[i]==utente){
            existe=1;
            for(int j=i;j<9;j++){
                marcacoes[j]=marcacoes[j+1];
            }
            marcacoes[9]=0;
            printf("\nO utente foi eliminado. Aguarde um momento sff.\n");
            Sleep(3000);            
            break;
        }
    }
    if(existe==0){
        printf("\nNº de utente não existe na fila. Aguarde um momento sff.\n");
        Sleep(3000);
    }
    
    
}