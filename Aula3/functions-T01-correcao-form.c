// UFCD 0810 - Aula 3 - 05/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Correção da Tarefa anterior
*/

void menu();
void exercicio1(int nota);
void exercicio2(float valor, float pdesconto);
void exercicio3(int numero);
void exercicio4(int x, int y, int z);
void exercicio5(char genero);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao,nota,numero,n1,n2,n3;
    float valor, pdesconto;
    char genero;
    do{
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                do{
                    printf("\nDigite a nota entre 0 e 20:");
                    scanf("%d",&nota);
                }while(nota<0 || nota>20);
                exercicio1(nota);
                break;
            case 2:
                printf("Digite um valor:");
                scanf("%f",&valor);
                printf("Digite a percentagem de desconto:");
                scanf("%f",&pdesconto);
                exercicio2(valor,pdesconto);
                break;
            case 3:                
                do{
                    printf("\nDigite um número entre 0 e 50:");
                    scanf("%d",&numero);
                }while(numero<0 || numero>50);
                exercicio3(numero);
                break;
            case 4:
                printf("Digite o 1º número:");
                scanf("%d",&n1);
                printf("Digite o 2º número:");
                scanf("%d",&n2);
                printf("Digite o 3º número:");
                scanf("%d",&n3);
                exercicio4(n1,n2,n3);
            case 5:     
                fflush(stdin);           
                printf("Digite o género (Ff ou Mm):");
                scanf("%c",&genero);
                exercicio5(genero);
        }
    }while(opcao!=6);
    return 0;
}

void menu(){
        system("cls");
        printf("*** Menu Funções ***\n");
        printf("\n1-Exercicio 1 (Nota)");
        printf("\n2-Exercicio 2 (Desconto)");
        printf("\n3-Exercicio 3 (Par ou impar)");
        printf("\n4-Exercicio 4 (Maior de 3)");
        printf("\n5-Exercicio 5 (Genero)");
        printf("\n6-Sair");
        printf("\nDigite a sua opção:");
}

void exercicio1(int nota){
    if(nota<10){
        printf("\nReprovado");
    }
    else if (nota<13){
        printf("\nExame");
    }
    else{
        printf("\nAprovado");
    }
    printf("\nFim da função nota\n");
    Sleep(2000);
}
void exercicio2(float valor, float pdesconto){
    printf("O valor do desconto é %.2f",(valor*(pdesconto/100)));    
    Sleep(2000);
}
void exercicio3(int numero){
    if(numero%2==0){
        printf("O número %d é par.",numero);
    }
    else{
        printf("O número %d é ímpar.",numero);
    }
    Sleep(2000);
}
void exercicio4(int x, int y, int z){
    int maior=x;
    if(y>maior) {
        maior=y;
    }
    if(z>maior){
        maior=z;
    }
    printf("O maior valor é %d",maior);
    Sleep(2000);   
}
void exercicio5(char genero){
    switch(genero){
        case 'F':
        case 'f':
            printf("Feminino\n");
            break;
        case 'M':
        case 'm':
            printf("Masculino\n");
            break;
        default:
            printf("ERRO\n");    

    }
    Sleep(2000);   
}