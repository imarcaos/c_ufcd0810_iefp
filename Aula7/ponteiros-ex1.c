// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
ponteiros de mem�ria
Um ponteiro � uma vari�vel capaz de armazenar o endere�o de mem�ria de uma vari�vel sempre
indicado com um asterisco *
*/



int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 

    int x, y, z;   
    int *p; // declarar um ponteiro para uma vari�vel do tipo inteiro

    x=10; y=20; z=30;
    p=&x;
    printf("Valor de p: %p, conte�do de p %d\n",p,*p);
    printf("y:%d, z:%d", y, z);
   
    return 0;
}
