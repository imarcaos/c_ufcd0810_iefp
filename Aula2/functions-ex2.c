// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>


/*
- funções do tipo void não retorna valores.
- funções não void retorna um valor.
*/

void soma(int x, int y);

int main() {
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 
    //----------------------
    
    int a, b;
    printf("Digite o 1º número: ");
    scanf("%d", &a);
    printf("\nDigite o 2º número: ");
    scanf("%d", &b);

    // invocar função
    soma(a, b);

    return 0;
}

void soma (int x, int y) {
    printf("A soma de %d com %d é: %d.",x,y,(x+y));
}