// UFCD 0810 - Aula 1 - 19/03/2024 - Marcos Melo
// Continuação da UFCD 0809

#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <time.h>


/*
Criar uma matriz com o nome de jogo 8 x 8 do tipo int. Sortear números entre 0 e 2.
Efectuar contagens para o zero, um e dois.
0-Derrota / 1-Empate / 2-Vitória
*/

int main() {
    setlocale(LC_ALL,"Portuguese");
    system("cls"); 
    //----------------------

    int m[8][8];
    int derrotas=0, empates=0, vitorias=0;
    srand(time(NULL));

    for(int linha=0; linha<8; linha++) {
        for(int coluna=0; coluna<8; coluna++) {
            m[linha][coluna]= rand()%3;
            switch ( m[linha][coluna])
            {
            case 0:
                derrotas++;
                break;
            case 1:
                empates++;
                break;
            case 2:
                vitorias++;
                break;
            }
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nDerrotas: %d.", derrotas);
    printf("\nEmpates: %d.", empates);
    printf("\nVitórias: %d.", vitorias);

    return 0;
}