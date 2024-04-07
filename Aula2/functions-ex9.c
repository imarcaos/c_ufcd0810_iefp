// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Armazenar 10 números inteiros aleatórios num vector. Criar uma menu
para gerar os números e listar os mesmos recorrendo as funções.
*/

int vetor[10];

void sortear_numeros();
void listar_numeros();
void menu();

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                sortear_numeros();
                break;
            case 2:
                listar_numeros();
                break;      
        }
    }while(opcao!=3);
    return 0;
}

void menu(){
        system("cls");
        printf("*** Menu Funções ***\n");
        printf("\n1-Gerar os números (entre 0 e 50)");
        printf("\n2-Mostrar os números");
        printf("\n3-Sair");
        printf("\nDigite a sua opção:");
}

void sortear_numeros(){
    srand(time(NULL));
    for(int i=0;i<10;i++){
        vetor[i]=rand()%51;
    }
    printf("\nFim do sorteio. Aguarde 2 seg. sff.\n");
    Sleep(2000);
}

void listar_numeros(){
    for(int i=0;i<10;i++){
        printf("%d -",vetor[i]);
    }
    printf("\nFim da listagem. Aguarde 2 seg. sff.\n");
    Sleep(2000);    
}