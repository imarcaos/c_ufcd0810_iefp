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
    struct Alunos al1[5], al2[5];
    FILE *ficheiro;

    // abrir o ficheiro
    ficheiro= fopen("alunos.txt", "wb"); // b binário, permite carregar ficheiros com linhas e outras estruturas

    for (int i=0; i<5; i++) {
        fflush(stdin);
        printf("Digite o nome: ");
        gets(al1[i].nome);

        printf("Digite a nota: ");
        scanf("%f", &al1[i].nota);
    }

    // guardar no ficheiro
    fwrite(al1, sizeof(al1), 1, ficheiro);
    fclose(ficheiro);

    // ler o ficheiro para a estrutura
    // abrir o ficheiro
    ficheiro=fopen("alunos.txt", "rb");
    fread(al2, sizeof(al2), 1, ficheiro);
    for (int i=0; i<5; i++) {
        printf("\nNome: %s Nota %.2f", al2[i].nome, al2[i].nota);
    }
    fclose(ficheiro);

    return 0;
}
