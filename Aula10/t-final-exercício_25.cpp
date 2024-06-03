// UFCD 0810 - Aula 10 - 03/06/2024 - Marcos Melo

/*
Question�rio e exerc�cios propostos para entregar no Teams
1 nome
2 a 21 - quest�es
22 a 25 exerc�cios propostos
*/

/*
25.
Recorrendo � estrutura while, crie um programa em C/C++ que solicite ao utilizador um n�mero inteiro e
apresente a tabuada da multiplica��o desse n�mero no seguinte formato:

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

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    cout << "Tabuada do " << num << ":" << endl;

    int i = 1;
    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
    
    return 0;
}
