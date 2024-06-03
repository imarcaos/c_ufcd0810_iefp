// UFCD 0810 - Aula 10 - 03/06/2024 - Marcos Melo

/*
Questionário e exercícios propostos para entregar no Teams
1 nome
2 a 21 - questões
22 a 25 exercícios propostos
*/

/*
23.
Crie um programa em C/C++ que gere um nº entre 0 e 2. Se 0 escrever ?ZERO?,
se 1 escreve ?UM?, se 2 escrever ?DOIS?.
*/


#include <iostream>
#include <clocale>
#include <windows.h>
#include <math.h>
#include <time.h>

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");

    int numSort;
    
    srand(time(NULL));
    numSort = rand()%3;    
    //cout<<numSort<<endl;

    if (numSort == 0) {
        cout<<"ZERO!"<<endl;
    } else if  (numSort == 1) {
        cout<<"UM!"<<endl;
    } else if  (numSort == 2) {
        cout<<"DOIS!"<<endl;
    } else {
        cout<<"Número Intruso!, sei que não irá cair aqui :D"<<endl;
    }     

    return 0;
}
