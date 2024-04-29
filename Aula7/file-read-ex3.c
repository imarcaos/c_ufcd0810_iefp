// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*
*/



int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 

    int numero;
    FILE *ficheiro;

    ficheiro=fopen("contatos.txt","r"); // lê o ficheiro

    if(ficheiro == NULL) {
        printf("Erro ao abrir o ficheiro!!");
    }
    else {  
        fscanf(ficheiro, "%d", &numero); // leitura       
        printf("O contato telefónico é %d", numero);
        
        fclose(ficheiro);

    }   

    return 0;
}
