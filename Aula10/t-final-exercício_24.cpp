// UFCD 0810 - Aula 10 - 03/06/2024 - Marcos Melo

/*
Questionário e exercícios propostos para entregar no Teams
1 nome
2 a 21 - questões
22 a 25 exercícios propostos
*/

/*
24
Usando um ciclo, crie um programa em C/C++ que produza o seguinte output:
**********(10) *(01)
*********(09) **(02)
********(08) ***(03)
*******(07) ****(04)
******(06) *****(05)
*****(05) ******(06)
****(04) *******(07)
***(03) ********(08)
**(02) *********(09)
*(01) **********(10)
*/


#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");
    system("cls");

    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        if((1 + (i-1)) < 10) cout << "(0" << (1 + (i-1)) << ")";
        else cout << "(" << (1 + (i-1)) << ")";
        for (int l = 11; l > i; l--) {
            cout << "*";
        }
        if((11 - i) < 10) cout << "(0" << (11 - i) << ")";
        else cout << "(" << (11 - i) << ")";
        cout << endl;
    }
    return 0;
}
