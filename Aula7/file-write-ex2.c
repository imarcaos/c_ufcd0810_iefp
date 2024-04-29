// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*
fopen - fun��o em C para abrir os ficheiros
w- escrita
r - leitura
fprintf - fun��o para escrever no ficheiro
fclose - fecha o ficheiro
*/



int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 

    int numero;
    FILE *ficheiro;

    //ficheiro=fopne("e:\\score.txt","w"); // unidade e: e caminho se necess�rio
    ficheiro=fopen("contatos.txt","w"); // salva no output na mesma para do execut�vel

    if(ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro!!");
    }
    else {

    }
    printf("Digite o contato telef�nico: ");
    scanf("%d", &numero);

    fprintf(ficheiro, "%d", numero); // escrita no ficheiro
    fclose(ficheiro);

    return 0;
}
