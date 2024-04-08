// UFCD 0810 - Aula 4 - 08/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Correção da Tarefa anterior - Tarefa 2, Aula 3
*/

float vendas[3];

void menu();
void recolhaVendas();
void listaVendas();
void listaVendasTotais();
void filialMaiorVenda();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                recolhaVendas();
                break;
            case 2:
                listaVendas();
                break;    
            case 3:
                listaVendasTotais();
                break;                 
            case 4:
                filialMaiorVenda();
                break;  
        }
    }while(opcao!=9);
    return 0;
}

void menu(){
        system("cls");
        printf("Empresa Vende Tudo, S.A\n");
        printf("Vendas (2023)\n\n");
        printf("\n1-Recolha de dados");
        printf("\n2-Listagem de dados");
        printf("\n3-Listagem de dados com total final");
        printf("\n4-Listar a filial com maior venda");
        printf("\n9-Sair");
        printf("\nDigite a sua opção:");
}

void recolhaVendas(){
    system("cls");
    printf("Recolha de vendas das filiais\n");
    for(int i=0;i<3;i++){
        printf("Digite o valor das vendas na %dª filial:",(i+1));
        scanf("%f",&vendas[i]);       
    }
    printf("\nRecolha efetuada. Aguarde 2 seg., sff\n");
    Sleep(2000);
}
void listaVendas(){
    system("cls");
    printf("Listagem de vendas\n");
    for(int i=0;i<3;i++){
        printf("\nVendas na %dª filial: %.2f",(i+1),vendas[i]);  
    }
    printf("\nListagem finalizada. Aguarde 2 seg., sff\n");
    Sleep(2000);
}
void listaVendasTotais(){
    system("cls");
    printf("Listagem de vendas com totais\n");
    float total=0;
    for(int i=0;i<3;i++){
        printf("\nVendas na %dª filial: %.2f",(i+1),vendas[i]);  
        total+=vendas[i];
    }
    printf("\n\nTotal:%.2f",total);
    printf("\nListagem finalizada. Aguarde 2 seg., sff\n");
    Sleep(2000);
}
void filialMaiorVenda(){
    system("cls");
    printf("Filial com maior venda\n");
    float maior=vendas[0];
    int posicaoMaior=0;
    for(int i=1;i<3;i++){
        if(vendas[i]>maior){
           maior=vendas[i];
           posicaoMaior=i;     
        }
    }
    printf("\n\nO maior valor de vendas foi na filial %d com %.2f",(posicaoMaior+1),vendas[posicaoMaior]);
    printf("\nListagem finalizada. Aguarde 2 seg., sff\n");
    Sleep(2000);    
}