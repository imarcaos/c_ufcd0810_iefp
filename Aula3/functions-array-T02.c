// UFCD 0810 - Aula 3 - 05/04/2024 - Marcos Melo

/*
Tarefa 02 - exercício:
Determinada empresa pretende desenvolver um programa em C que lhe permita realizar a
recolha do total das vendas realizadas nas suas 3 filiais em 2023. Crie uma estrutura de
arrays(tabelas) para recolha e manipulação dos dados

Considere as seguintes opções:
- Recolha de dados.
- Listagem de dados.
- Listagem de dados com total final.
- Listar a filial com maior venda.
- Terminar o programa.

Nota: Utilize (arrays)
Possível Layout:
------------------------------------------------------------------------------------------------------------------------
Empresa VendeTudo, S.A.
Vendas (2023)

Menu
------------------------------------------------------------------------------------------------------------------------
1 ? Recolha de dados.
2 - Listagem de dados.
3 - Listagem de dados com total final.
4 ? Listar a filial com maior venda.
9 - Terminar o programa.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

void menu();
void recolhaValor();
void listagemValores();
void totalFinal();
void maiorVenda();

float vendasTotal[3];

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    int opcao;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                recolhaValor();
                break;
            case 2:
                listagemValores();
                break;
            case 3:
                totalFinal();
                break;    
            case 4:
                maiorVenda();      
                break;               
        }
    }while(opcao!=5);
    return 0;
}

void menu(){
        system("cls");
        printf("\n-------------------------");
        printf("\nEmpresa VendeTudo, S.A.");
        printf("\nVendas (2023)");
        printf("\n-------------------------");
        printf("\n*** Menu Vendas Filias ***\n");
        printf("\n1-Recolha das dados.");
        printf("\n2-Listagem de dados.");
        printf("\n3-Listagem de dados com total final.");
        printf("\n4-Listar a filial com maior venda.");
        printf("\n5-Teminar o programa");
        printf("\nDigite a sua opção:");
}

void recolhaValor(){
    system("cls");
    printf("Recolha do total de vendas de cada filial\n");
    for(int i=0;i<3;i++){
        do{
            printf("\nDigite o valor de vendas da Filial %d: ",(i+1));
            scanf("%f",&vendasTotal[i]);       
        }while(vendasTotal[i]<0);
    }
    printf("\n\nFim da recolha dos Valores. Aguarde 2 seg., sff\n");
    Sleep(2000);
}

void listagemValores(){
    system("cls");
    char menuVoltar;
    printf("Listagem dos valores de vendas por Filial\n");
    for(int i=0;i<3;i++){
        printf("\nFilial %d: %.2f Euros",(i+1), vendasTotal[i]);   
    }
    do {
        getchar();
        printf("\nDigite: M para voltar ao menu: ");
        scanf("%c",&menuVoltar);        
    } while(menuVoltar!='M' && menuVoltar!='m');
    printf("\n\nFim da listagem das dos Valores de Vendas. Retornando ao Menu\n");
}

void totalFinal(){
    system("cls");
    char menuVoltar;
    float valorTotal;
    printf("Listagem dos valores de vendas por Filial\n");
    for(int i=0;i<3;i++){
        printf("\nFilial %d: %.2f Euros",(i+1), vendasTotal[i]);   
        valorTotal += vendasTotal[i];
    }
    printf("\n---- Total Vendas: %.2f Euros ----", valorTotal);
    do {
        getchar();
        printf("\nDigite: M para voltar ao menu: ");
        scanf("%c",&menuVoltar);        
    } while(menuVoltar!='M' && menuVoltar!='m');
    printf("\n\nFim da listagem das dos Valores e Total de Vendas. Retornando ao Menu\n");
}

void maiorVenda(){
    system("cls");
    char menuVoltar;
    float valorMaior=0;
    int indice;
    printf("Listagem dos valores de vendas por Filial\n");
    for(int i=0;i<3;i++){
        if(valorMaior < vendasTotal[i]) {
            valorMaior= vendasTotal[i];
            indice= i;
        }
    }    
    printf("\nMaior Venda efectuada pela Filial %d, Valor: %.2f Euros",(indice+1), vendasTotal[indice]);
    do {
        getchar();
        printf("\nDigite: M para voltar ao menu: ");
        scanf("%c",&menuVoltar);        
    } while(menuVoltar!='M' && menuVoltar!='m');
    printf("\n\nFim da listagem da Filial com Maior. Retornando ao Menu\n");
}