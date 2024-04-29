// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Pretende-se criar um programa em C que faça a gestão de armazenamento dos
funcionários de uma empresa. Para o efeito crie uma estrutura com os seguintes
atributos:
numFuncionario - int
nomeFuncionario - char[30]
departamentoFuncionario ? char(3)
salarioFuncionario - Float
Vamos ter um array com 50 elementos do tipo estrutura.
Crie um menu com as seguintes opções:
- Inserir funcionário.
- Alterar os dados do funcionário.
- Listagem geral de funcionários.
- Listagem geral de funcionários por departamento.
- Terminar o programa.
Possível Layout:
------------------------------------------------------------------------------------------------------------------------
Empresa Indústria do Porco, S. A.
Gestão de funcionários
------------------------------------------------------------------------------------------------------------------------
Menu
------------------------------------------------------------------------------------------------------------------------
1 ? Inserir funcionário.
2 - Alterar os dados do funcionário.
3 ? Listagem geral de funcionários.
4 ? Listagem geral de funcionários por departamento.
9 - Terminar o programa.
----------------------------------

Código do Formador para correções
*/

#define NF 50

int escolha;
void menu();
void inserir();
void listagemGeral();
void alterar();
void listagemDepartamento();

struct funcionarios{
    int numFuncionario;
    char nomeFuncionario[30];
    char departamentoFuncionario[3];
    float salarioFuncionario;
};

struct funcionarios func[NF];


int main(){
    setlocale(LC_ALL,"Portuguese");
    
    menu();
   
    return 0;
}

void menu(){
    system("cls");
    printf("Gestão de funcionários");
    printf("\n\n1-Inserir funcionário");
    printf("\n2-Alterar dados do funcionário");
    printf("\n3-Listagem geral de funcionários");
    printf("\n4-Listagem geral de funcionários por departamento");
    printf("\n0-Terminar o programa");
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
        listagemDepartamento();
        menu();
    } 
   else{
        printf("\nOpçãoo inválida\n");
        Sleep(2000);
        menu();
    }      
  
}

void inserir(){
    system("cls");
    printf("Registar funcionário\n");
    int numero=0;
    if(func[NF-1].numFuncionario!=0){
        printf("Estrutura completa.\n");
        Sleep(2000);
        return;
    }
    for(int i=0;i<NF;i++){
        if(func[i].numFuncionario==0){

            do{
                printf("\nNúmero:");
                scanf("%d",&numero);
            }while(numero==0);

            func[i].numFuncionario=numero;
            
            fflush(stdin);
            printf("Nome:");
            gets(func[i].nomeFuncionario);

            fflush(stdin);
            printf("Departamento (INF/RH/MAR/CON/PRO):");
            gets(func[i].departamentoFuncionario);

            do{
                printf("\nSalário:");
                scanf("%f",&func[i].salarioFuncionario);
            }while(func[i].salarioFuncionario<=0);
   
            break;
        }
    }
}
void listagemGeral(){
    system("cls");
    printf("Listagem de funcionários\n");
    for(int i=0;i<NF;i++){
        if(func[i].numFuncionario!=0){
            printf("\n%d",func[i].numFuncionario);
            printf(" | %s",func[i].nomeFuncionario);
            printf(" | %s",func[i].departamentoFuncionario);
            printf(" | %.2f",func[i].salarioFuncionario);
        }
    }
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    Sleep(2000);
}
void alterar(){
    int numero;
    char confirma;
    system("cls");
    printf("\nAlterar dados do funcionário\n");
    printf("Digite o número de funcionário:");
    scanf("%d",&numero);
    for(int i=0;i<NF;i++){
        if(func[i].numFuncionario==numero){
            printf("\n%d",func[i].numFuncionario);
            printf(" | %s",func[i].nomeFuncionario);
            printf(" | %s",func[i].departamentoFuncionario);
            printf(" | %.2f",func[i].salarioFuncionario);    

            fflush(stdin);
            printf("\nDigite Ss para alterar o nome:");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                printf("Nome:");
                gets(func[i].nomeFuncionario);
            }

            fflush(stdin);
            printf("\nDigite Ss para alterar o departamento:");
            scanf("%c",&confirma);
            fflush(stdin);
            if(confirma=='S' || confirma=='s'){
                printf("Departamento:");
                gets(func[i].departamentoFuncionario);
            }

            fflush(stdin);
            printf("\nDigite Ss para alterar o salário:");
            scanf("%c",&confirma);
            if(confirma=='S' || confirma=='s'){
                printf("Salário:");
                scanf("%f",&func[i].salarioFuncionario);
            }

            printf("\n\nFim da alteração. Aguarde um pouco sff.\n");
            Sleep(2000);            
            break;
        }
    }
}
void listagemDepartamento(){
    char dep[3];
    system("cls");
    printf("Listagem de funcionários por departamento\n");
    fflush(stdin);
    printf("Departamento:");
    gets(dep);
    for(int i=0;i<NF;i++){
        if(func[i].numFuncionario!=0 && strcmp(func[i].departamentoFuncionario,dep) == 0){
            printf("\n%d",func[i].numFuncionario);
            printf(" | %s",func[i].nomeFuncionario);
            printf(" | %s",func[i].departamentoFuncionario);
            printf(" | %.2f",func[i].salarioFuncionario);
        }
    }
    printf("\n\nFim da listagem. Aguarde um pouco sff.\n");
    Sleep(2000);
}