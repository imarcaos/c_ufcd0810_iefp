// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*
*/

struct Alunos {
    char nome[30];
    float nota;
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");
    struct Alunos al2[5];
    FILE *ficheiro;

    // ler do ficheiro para a estrutura
    // abrir o ficheiro
    ficheiro=fopen("alunos.txt","rb");
       if(ficheiro==NULL){
        printf("Erro ao abrir o ficheiro!!");
        return 0;
    }    

    fread(al2,sizeof(al2),1,ficheiro);
    for(int i=0;i<5;i++){
        printf("\nNome:%s Nota:%.2f",al2[i].nome,al2[i].nota);
    }
    fclose(ficheiro);
    return 0;
}
