// UFCD 0810 - Aula 5 - 17/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
Manipula��o de Strings
*/

int main(){
    setlocale(LC_ALL,"Portuguese");
    char nome[30], apelido[30];
    printf("Digite o seu nome: ");
    scanf(nome); //n�o usamos o c(char) e sim s(string)
    gets("Digite o seu apelido: ");
    gets(apelido);
    printf("O seu nome �: %s, %s", apelido, nome);


    return 0;
}