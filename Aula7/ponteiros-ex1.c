// UFCD 0810 - Aula 7 - 29/04/2024 - Marcos Melo

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/*
ponteiros de memória
Um ponteiro é uma variável capaz de armazenar o endereço de memória de uma variável sempre
indicado com um asterisco *
*/



int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 

    int x, y, z;   
    int *p; // declarar um ponteiro para uma variável do tipo inteiro

    x=10; y=20; z=30;
    p=&x;
    printf("Valor de p: %p, conteúdo de p %d\n",p,*p);
    printf("y:%d, z:%d", y, z);
   
    return 0;
}
