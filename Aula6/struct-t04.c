// UFCD 0810 - Aula 6 - 18/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Pretende-se criar um programa em C que fa�a a gest�o de armazenamento dos
funcion�rios de uma empresa. Para o efeito crie uma estrutura com os seguintes
atributos:
numFuncionario - int
nomeFuncionario - char[30]
departamentoFuncionario ? char(3)
salarioFuncionario - Float
Vamos ter um array com 50 elementos do tipo estrutura.
Crie um menu com as seguintes op��es:
- Inserir funcion�rio.
- Alterar os dados do funcion�rio.
- Listagem geral de funcion�rios.
- Listagem geral de funcion�rios por departamento.
- Terminar o programa.
Poss�vel Layout:
------------------------------------------------------------------------------------------------------------------------
Empresa Ind�stria do Porco, S. A.
Gest�o de funcion�rios
------------------------------------------------------------------------------------------------------------------------
Menu
------------------------------------------------------------------------------------------------------------------------
1 ? Inserir funcion�rio.
2 - Alterar os dados do funcion�rio.
3 ? Listagem geral de funcion�rios.
4 ? Listagem geral de funcion�rios por departamento.
9 - Terminar o programa.
----------------------------------

V1 - falta completar: alterar e listagemDepartamento
*/

#define NF 50

int escolha;
void menu();
void inserir();
void listagemGeral();
void alterar();
void listagemDepartamento();
void printInfo(int i);

struct funcionario{
    int numFuncionario;
    char nomeFuncionario[30];
    char departamentoFuncionario[3];
    float salarioFuncionario;
};

struct funcionario fu[NF];


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    menu();
   
    return 0;
}

void menu(){
    system("cls");
    printf("************************************");    
    printf("\nEmpresa Ind�stria do Porco, S. A.");
    printf("\nGest�o de Funcion�rios");
    printf("\n************************************");
    printf("\n1-Inserir Funcion�rio");
    printf("\n2-Alterar dados do funcion�rio");
    printf("\n3-Listagem dos Funcion�rios");
    printf("\n4-Listagem dos Funcion�rios por Departamentos");
    printf("\n0-Terminar o programa");
    printf("\nDigite a sua escolha:");
    scanf("%d",&escolha);
    if(escolha==0){
        printf("\nFim do programa\n");
        Sleep(1000);
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
        listagemDepartamento();
        menu();
    } 
   else{
        printf("\nOp��o inv�lida\n");
        Sleep(2000);
        menu();
    }      
  
}

void inserir(){
    system("cls");
    printf("Registar funcion�rio\n");
    int numero=0;

    if(fu[NF-1].numFuncionario!=0){
        printf("Estrutura completa.\n");
        Sleep(2000);
        return;
    }
    for(int i=0;i<NF;i++){
        if(fu[i].numFuncionario==0){

            // N� Funcion�rio
            do{
                printf("\nN�mero: ");
                scanf("%d",&numero);
            }while(numero==0);
            fu[i].numFuncionario=numero;

            // Nome Funcion�rio
            fflush(stdin);
            printf("Nome: ");
            gets(fu[i].nomeFuncionario);

            // Departamento do Funcion�rio
            fflush(stdin);
            printf("Departamento: (adm)inistrativo / (sec)retaria / (ges)t�o: ");
            gets(fu[i].departamentoFuncionario);
            
            // Sal�rio Funcion�rio
            do{
                printf("Sal�rio do Funcion�rio: ");
                scanf("%f",&fu[i].salarioFuncionario);
            }while(fu[i].salarioFuncionario<0);
            
            break;
        }
    }
}
void listagemGeral(){
    system("cls");
    char menuVoltar;

    printf("Listagem de Funcion�rios\n");
    for(int i=0;i<NF;i++){
        if(fu[i].numFuncionario!=0){
            printInfo(i);         
        }
    }
    do {
        fflush(stdin);
        printf("\n\nDigite: C para continuar para menu: ");
        scanf("%c",&menuVoltar);        
    } while(menuVoltar!='C' && menuVoltar!='c');
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    //Sleep(2000);
}


void alterar(){
    int numero;
    char confirma;
    system("cls");
    printf("\nAlterar dados do Funcion�rio\n");
    printf("Digite o n�mero do Funcion�rio:");
    scanf("%d",&numero);
    for(int i=0;i<NF;i++){
        if(fu[i].numFuncionario==numero){
            printInfo(i);  

            // Nome
            fflush(stdin);
            printf("\nDigite Ss para alterar o Nome: ");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                printf("Nome: ");
                gets(fu[i].nomeFuncionario);
            }

            // Departamento
            fflush(stdin);
            printf("\nDigite Ss para alterar o Departamento:");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                fflush(stdin);
                printf("Departamento: (adm)inistrativo / (sec)retaria / (ges)t�o: ");
                gets(fu[i].departamentoFuncionario);
            }

            // Sal�rio
            fflush(stdin);
            printf("\nDigite Ss para alterar o Sal�rio: ");
            scanf("%c",&confirma);
            if(confirma=='S' || confirma=='s'){
                printf("Sal�rio: ");
                scanf("%f",&fu[i].salarioFuncionario);
            }
            printInfo(i); 
            printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
            Sleep(3000);            
            break;
        }
    }
}


void listagemDepartamento(){
    char departamento[3];
    system("cls");
    printf("Listagem de Funcion�rios por Departamento\n");
    fflush(stdin);
    printf("Departamento: (adm)inistrativo / (sec)retaria / (ges)t�o: ");
    gets(departamento);
    for(int i=0;i<NF;i++){
        if(fu[i].numFuncionario!=0 && fu[i].departamentoFuncionario==departamento){
            printf(departamento);
            printInfo(i);
        }
    }
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    Sleep(2000);
}


void printInfo(int i) {
    printf("\n---------------------------------------");
    printf("\n%d",fu[i].numFuncionario);
    printf(" | %s",fu[i].nomeFuncionario);
    printf(" | %s",fu[i].departamentoFuncionario);
    printf(" | %.2f",fu[i].salarioFuncionario);  
}