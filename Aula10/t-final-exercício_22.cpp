// UFCD 0810 - Aula 10 - 03/06/2024 - Marcos Melo

/*
Questionário e exercícios propostos para entregar no Teams
1 nome
2 a 21 - questões
22 a 25 exercícios propostos
*/

/*
22.
Crie um programa em C/C++ que cumprimente o utilizador solicitando a hora atual. Se a hora estiver entre 8 e 11 escrever ?Bom dia.?, entre 12 e 19 ?Boa tarde?, outra hora ?Boa noite?.
(Utilize a estrutura if).
*/


#include <iostream>
#include <clocale>

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");

    int hour;

    system("cls");
    
    cout<<"Olá, Bem vindo ao nosso Programa de Boas Vindas!"<<endl;
    cout<<"Por favor, digite a hora atual entre 0 a 24 horas: ";
    cin>>hour;

    if (hour >= 8 && hour <= 11) {
        cout<<"Bom dia!"<<endl;
    } else if  (hour >= 12 && hour <= 19) {
        cout<<"Bom tarde!"<<endl;
    } else {
        cout<<"Boa noite!"<<endl;
    }    

    return 0;
}
