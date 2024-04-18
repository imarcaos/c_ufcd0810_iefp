// UFCD 0810 - Aula 5/6 - 18/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Quiz part 2
*/


int main(){
    setlocale(LC_ALL,"Portuguese");
    // declarar uma variável para a escolha do utilizador
    int escolha_utilizador;
    // declarar uma matriz de strings
    char *quiz[3][4];
    // criar um vetor com o nº da resposta certa
    int respostas_certas[3]={3,1,2};
    int certas=0;
    quiz[0][0]="Quem foi o 1º Rei de Portugal?";
    quiz[0][1]="D. João I";
    quiz[0][2]="D. Dinis";
    quiz[0][3]="D. Afonso Henriques";

    quiz[1][0]="Quem foi o lavrador?";
    quiz[1][1]="D. Dinis";
    quiz[1][2]="D. Fernando";
    quiz[1][3]="D. Sancho I";

    quiz[2][0]="Quem descobriu o caminho marítimo para a Índia?";
    quiz[2][1]="D. Duarte";
    quiz[2][2]="Vasco da Gama";
    quiz[2][3]="Pedro Alvares Cabral";    

    system("cls");

    // criar um ciclo para percorrer a matriz do quiz
    printf("/*** QUIZ HISTÓRIA DE PORTUGAL ***/\n\n");
    for(int i=0;i<3;i++){
        // número da pergunta
        printf("\n%d Pergunta:",(i+1));
        // descrição da pergunta
        printf("\n%s",quiz[i][0]);
        // apresentar as respostas
        for(int j=1;j<4;j++){
            printf("\n[%d]-%s",j,quiz[i][j]);
        }
        do{
            printf("\nDigite a sua escolha:");
            scanf("%d",&escolha_utilizador);
        }while(escolha_utilizador<1 || escolha_utilizador>3);
        if(respostas_certas[i]==escolha_utilizador){
            certas++;
        }
    }
    printf("\nFim do Quiz. Acertou em %d pergunta(s).",certas);
    return 0;
}