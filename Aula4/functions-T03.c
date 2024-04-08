// UFCD 0810 - Aula 4 - 08/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Tarefa 3 - Clínica com Registo de Marcações
Utilizando funções, menu com switch case e array.

Pretende-se criar um programa em C que faça a gestão de uma fila de espera. Para o
efeito vamos ter um array com 10 elementos do tipo inteiro.
Notas:
Para realizar a marcação é solicitado ao utilizador o nº do utente (entre 1 e 999) e
colocado na 1ª posição livre (igual a zero).
A marcação de urgência coloca o utente na 1ª posição.
A eliminação retira da lista o número do utente.
Utilize funções.
O registo das marcações deve estar sempre visível e passa a ter as seguintes opções:
Crie um menu com as seguintes opções:
- Realizar Marcação.
- Marcação de Urgência.
- Eliminar Marcação.
- Terminar o programa.
Possível Layout:
------------------------------------------------------------------------------------------------------------------------
Clínica Quebra-Ossos
Registo de Marcações
0 1 2 3 4 5 6 7 8 9
0 0 0 0 0 0 0 0 0 0
------------------------------------------------------------------------------------------------------------------------
Menu
------------------------------------------------------------------------------------------------------------------------
1 ? Realizar Marcação.
2 ? Marcação de Urgência.
3 ? Eliminar Marcação.
9 - Terminar o programa.
---------------------------------------------------------------------------------------------------------------
*/

int marcacoes[10]={0,0,0,0,0,0,0,0,0,0};

void menu();
void marcacao();

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
                
                break;    
            case 3:
                
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
    system("cls");
    printf("Realizar Marcação\n");
    do{
        printf("\nDigite o nº de utente (1 e 999):");
        scanf("%d",&utente);
    }while(utente<1 || utente>999);
    // ver se o utente já existe na fila
    
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