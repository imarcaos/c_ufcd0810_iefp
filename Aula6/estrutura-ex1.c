// UFCD 0810 - Aula 6 - 18/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Estrutura - Struct
*/


int escolha;
void menu();
void inserir();
void listagemGeral();
void alterar();
void listagemGenero();

struct aluno{
    int numAluno;
    char nomeAluno[30];
    float notaFinal;
    char generoAluno;
};

struct aluno al[20];


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    menu();
   
    return 0;
}

void menu(){
    system("cls");
    printf("Gestão de alunos");
    printf("\n\n1-Inserir Aluno");
    printf("\n2-Alterar dados do aluno");
    printf("\n3-Listagem dos alunos");
    printf("\n4-Listagem por género");
    printf("\n0-Sair");
    printf("\nDigite a sua escolha:");
    scanf("%d",&escolha);
    if(escolha==0){
        printf("\nFim do programa\n");
        Sleep(2000);
        return;
    }
    else if(escolha==1){
        inserir();
        menu();
    }
   else if(escolha==2){
        alterar();
        menu();
    }    
    else if(escolha==3){
        listagemGeral();
        menu();
    }
    else if(escolha==4){
        listagemGenero();
        menu();
    } 
   else{
        printf("\nOpção inválida\n");
        Sleep(2000);
        menu();
    }      
  
}

void inserir(){
    system("cls");
    printf("Registar aluno\n");
    int numero=0;
    if(al[19].numAluno!=0){
        printf("Estrutura completa.\n");
        Sleep(2000);
        return;
    }
    for(int i=0;i<20;i++){
        if(al[i].numAluno==0){

            do{
                printf("\nNúmero:");
                scanf("%d",&numero);
            }while(numero==0);

            al[i].numAluno=numero;
            fflush(stdin);
            printf("Nome:");
            gets(al[i].nomeAluno);
            do{
                printf("\nNota final:");
                scanf("%f",&al[i].notaFinal);
            }while(al[i].notaFinal<0 || al[i].notaFinal>20);

            fflush(stdin);
            printf("Género: (M)asculino / (F)eminino:");
            scanf("%c",&al[i].generoAluno);
            break;
        }
    }
}
void listagemGeral(){
    system("cls");
    printf("Listagem de aluno\n");
    for(int i=0;i<20;i++){
        if(al[i].numAluno!=0){
            printf("\n%d",al[i].numAluno);
            printf(" | %s",al[i].nomeAluno);
            printf(" | %.2f",al[i].notaFinal);
            printf(" | %c",al[i].generoAluno);
        }
    }
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    Sleep(2000);
}
void alterar(){
    int numero;
    char confirma;
    system("cls");
    printf("\nAlterar dados de alunos\n");
    printf("Digite o número de aluno:");
    scanf("%d",&numero);
    for(int i=0;i<20;i++){
        if(al[i].numAluno==numero){
            printf("\n%d",al[i].numAluno);
            printf(" | %s",al[i].nomeAluno);
            printf(" | %.2f",al[i].notaFinal);
            printf(" | %c",al[i].generoAluno);    

            fflush(stdin);
            printf("\nDigite Ss para alterar o nome:");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                printf("Nome:");
                gets(al[i].nomeAluno);
            }
            fflush(stdin);
            printf("\nDigite Ss para alterar a nota:");
            scanf("%c",&confirma);
            if(confirma=='S' || confirma=='s'){
                printf("Nota final:");
                scanf("%f",&al[i].notaFinal);
            }
            fflush(stdin);
            printf("\nDigite Ss para alterar o género:");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                printf("Género: (M)asculino / (F)eminino:");
                scanf("%c",&al[i].generoAluno);
            }
            printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
            Sleep(2000);            
            break;
        }
    }
}
void listagemGenero(){
    char genero;
    system("cls");
    printf("Listagem de alunos por género\n");
    fflush(stdin);
    printf("Digite o género: (M)asculino / (F)eminino:");
    scanf("%c",&genero);
    for(int i=0;i<20;i++){
        if(al[i].numAluno!=0 && al[i].generoAluno==genero){
            printf("\n%d",al[i].numAluno);
            printf(" | %s",al[i].nomeAluno);
            printf(" | %.2f",al[i].notaFinal);
            printf(" | %c",al[i].generoAluno);
        }
    }
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    Sleep(2000);
}