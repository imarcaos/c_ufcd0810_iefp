// UFCD 0810 - Aula 2 - 26/03/2024 - Marcos Melo


#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>


/*
- fun��es do tipo void n�o retorna valores.
- fun��es n�o void retorna um valor.
*/

void soma(int x, int y);

int main() {
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 
    //----------------------

    soma(7, 12);

    return 0;
}

void soma (int x, int y) {
    printf("A soma dos n�meros �: %d.", (x+y));
}