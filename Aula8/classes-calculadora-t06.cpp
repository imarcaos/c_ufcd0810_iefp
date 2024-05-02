// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

/*
->Crie uma classe em C++ com o nome Calculadora. Esta classe possui 2 variáveis
membro do tipo float.
->Crie 4 métodos que manipulem respetivamente a soma, a subtração, a
multiplicação e a divisão.
->Crie um loop na função main para solicitar ao utilizador os dados e apresentar os
resultados.
*/

#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

void message();

class Calculadora{
    public:
        float num1;
        float num2;

        void somar() {
            float result;
            result= num1 + num2;
            cout<<"O valor da soma é: "<<result;
        }

        void subtrair() {
            float result;
            result= num1 - num2;
            cout<<"O valor da subtração é: "<<result;
        }

        void multiplicar() {
            float result;
            result= num1 * num2;
            cout<<"O valor da multiplicação é: "<<result;
        }

        void dividir() {
            float result;
            result= num1 / num2;
            cout<<"O valor da divisão é: "<<result;
        }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    Calculadora calc;
    int opcao=0;

    do{
        system("cls");
        cout<<"Calculadora Simples"<<endl;
        cout<<"1-Somar"<<endl;
        cout<<"2-Subtrair"<<endl;
        cout<<"3-Multiplicar"<<endl;
        cout<<"4-Dividir"<<endl;   
        cout<<"0-Terminar"<<endl;
        cout<<"Digite a sua opção:"<<endl;
        cin>>opcao;
        switch(opcao){
            case 1:
                system("cls");
                cout<<"Calculadora - Soma"<<endl;

                cout<<"Digite o 1º valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2º valor: ";
                cin>>calc.num2;

                calc.somar();
                message();               
                break;
            case 2:
                system("cls");
                cout<<"Calculadora - Subtração"<<endl;

                cout<<"Digite o 1º valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2º valor: ";
                cin>>calc.num2;

                calc.subtrair();
                message(); 
                break;
            case 3:
                system("cls");
                cout<<"Calculadora - Multiplicação"<<endl;

                cout<<"Digite o 1º valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2º valor: ";
                cin>>calc.num2;

                calc.multiplicar();
                message(); 
                break;
            case 4:
                system("cls");
                cout<<"Calculadora - Divisão"<<endl;

                cout<<"Digite o 1º valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2º valor: ";
                cin>>calc.num2;

                calc.dividir();
                message(); 
                break;     
        }
    
    }while(opcao!=0);    

    return 0;
}


void message() {
    cout<<endl<<"-----------------------------------------"<<endl;
    cout<<"Obrigado por Utilizar a Super Calculadora"<<endl;
    Sleep(3000);
}