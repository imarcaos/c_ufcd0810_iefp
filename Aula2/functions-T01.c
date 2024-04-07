// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Exercício 1 - Crie uma função em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20) e esc
?Aprovado? (Se maior do que 12), ?Exame? (Entre 10 e 12), ?Reprovado? (Se menor do que 10).
Exercício 2 - Crie uma função em C, do tipo void, que receba um valor float e uma percentagem de desconto e
apresente o valor do desconto.
Exercício 3 - Crie uma função em C, do tipo void, que receba um número entre 0 e 50 e devolva a informação se o
número é par ou ímpar.
Exercício 4 - Crie uma função em C, do tipo void, que receba 3 números e apresente o maior.
Exercício 5 - Crie uma função em C, do tipo void, que receba um caracter. Valida se é F/f ou M/m e escreve
feminino ou masculino ou inválido.
Nota: Crie um menu de escolha para as funções anteriores.
*/

void menu();
void exercicio1(int nota);
void exercicio2(float valor, float percent);
void exercicio3(int num);
void exercicio4();
void exercicio5(char gen);

int vetor[3]; //exercício 4

int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao, nota, numMaiMen;
    float valor, percent;
    char gen;

    do {
        menu();
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            do {
                printf("\nDigite a nota entre 0 e 20: ");
                scanf("%d", &nota);
            } while (nota < 0 || nota > 20);
            exercicio1(nota);
            break;
        case 2:
            do {
                printf("\nDigite o valor: ");
                scanf("%f", &valor);
                printf("\nDigite o desconto (Porcentagem 0-100): ");
                scanf("%f", &percent);
            } while (valor <= 0 || percent < 0 || percent > 100);
            exercicio2(valor, percent);
            break;
        case 3:
            do {
                printf("\nDigite um número entre 0 e 50: ");
                scanf("%d", &numMaiMen);
            } while (numMaiMen < 0 || numMaiMen > 50);
            exercicio3(numMaiMen);
            break;
        case 4:
            printf("\nDigite 3 números inteiros a seguir:");
            for(int i=0;i<3;i++){
                printf("\nDigite o %dº número: ", i+1);
                scanf("%d", &vetor[i]);
            }
            exercicio4();
            break;
        case 5:                                 
            do {
                fflush(stdin);                                  
                printf("\nDigite fF(Feminino) ou mM(Masculino): ");
                scanf("%c", &gen);               
            } while (gen != 'f' && gen != 'F' && gen != 'm' && gen != 'M');
            exercicio5(gen);
            break;
        }
    } while (opcao != 6);
    return 0;
}

void menu() {
    system("cls");
    printf("*** Menu Funções ***\n");
    printf("\n1-Exercicio 1 (Nota)");
    printf("\n2-Exercicio 2 (Desconto)");
    printf("\n3-Exercicio 3 (Par/Ímpar)");
    printf("\n4-Exercicio 4 (Maior Número)");
    printf("\n5-Exercicio 5 (Masc/Fem)");
    printf("\n6-Sair");
    printf("\nDigite a sua opção:");
}

void exercicio1(int nota) {
    if (nota < 10) {
        printf("\nReprovado");
    }else if (nota < 13) {
        printf("\nExame");
    } else {
        printf("\nAprovado");
    }
    Sleep(2000);
}

void exercicio2(float valor, float percent) {
    float calcTemp = valor-((valor*percent)/100);
    printf("\nO valor do desconto é de: %.2f euros", calcTemp);
    Sleep(2000);
}

void exercicio3(int num) {
    if (num%2 == 0) {
        printf("\nNúmero %d é Par", num);
    } else {
        printf("\nNúmero %d é Ímpar", num);
    }
    Sleep(2000);
}

void exercicio4() {
    int temp=0;
    for(int i=0;i<3;i++){
        printf("%d ", vetor[i]);
        if(temp<vetor[i]){
            temp= vetor[i];
        }
    }
    printf("\nO Número Maior é %d", temp);
    Sleep(2000);
}

void exercicio5(char gen) {
    if(gen == 'f' || gen == 'F') {
        printf("\nEscolheu %c de Feminino", gen);
    } else {
        printf("\nEscolheu %c de Masculino", gen);
    }    
    Sleep(2000);
}