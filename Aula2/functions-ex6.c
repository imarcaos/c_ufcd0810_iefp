// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>


/*

*/

int soma (int x, int y);

int main() {
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 
    //----------------------

    int x, y;
    printf("Digite o 1º número: ");
    scanf("%d", &x);
    printf("\nDigite o 2º número: ");
    scanf("%d", &y);
    printf("A soma de %d com %d é: %d.", x, y, soma(x, y));

    return 0;
}

int soma (int x, int y) {
    return(x+y);    
}