// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>


/*
- fun��es do tipo void n�o retorna valores.
- fun��es n�o void retorna um valor.
No exemplo 2 e 3 a diferen�a � apenas nos nomes das vari�veis, para mostrar que n�o afetam a fun��o.
*/

void soma();

int main() {
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 
    //----------------------
    
    soma();

    return 0;
}

void soma () {
    int x, y;
    printf("Digite o 1� n�mero: ");
    scanf("%d", &x);
    printf("\nDigite o 2� n�mero: ");
    scanf("%d", &y);
    printf("A soma de %d com %d �: %d.",x,y,(x+y));
}