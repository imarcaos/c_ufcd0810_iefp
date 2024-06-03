// UFCD 0810 - Aula 10 - 03/06/2024 - Marcos Melo

/*
Questionário e exercícios propostos para entregar no Teams
1 nome
2 a 21 - questões
22 a 25 exercícios propostos
*/

/*
25.
Recorrendo à estrutura while, crie um programa em C/C++ que solicite ao utilizador um número inteiro e
apresente a tabuada da multiplicação desse número no seguinte formato:

Exemplo:
7 x 1 = 7
7 x 2 = 14
?.
7 x 10 = 70
*/


#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");

    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Tabuada do " << num << ":" << endl;

    int i = 1;
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
    
    return 0;
}
