// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

/*
->Crie uma classe em C++ com o nome Calculadora. Esta classe possui 2 vari�veis
membro do tipo float.
->Crie 4 m�todos que manipulem respetivamente a soma, a subtra��o, a
multiplica��o e a divis�o.
->Crie um loop na fun��o main para solicitar ao utilizador os dados e apresentar os
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
            cout<<"O valor da soma �: "<<result;
        }

        void subtrair() {
            float result;
            result= num1 - num2;
            cout<<"O valor da subtra��o �: "<<result;
        }

        void multiplicar() {
            float result;
            result= num1 * num2;
            cout<<"O valor da multiplica��o �: "<<result;
        }

        void dividir() {
            float result;
            result= num1 / num2;
            cout<<"O valor da divis�o �: "<<result;
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
        cout<<"Digite a sua op��o:"<<endl;
        cin>>opcao;
        switch(opcao){
            case 1:
                system("cls");
                cout<<"Calculadora - Soma"<<endl;

                cout<<"Digite o 1� valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2� valor: ";
                cin>>calc.num2;

                calc.somar();
                message();               
                break;
            case 2:
                system("cls");
                cout<<"Calculadora - Subtra��o"<<endl;

                cout<<"Digite o 1� valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2� valor: ";
                cin>>calc.num2;

                calc.subtrair();
                message(); 
                break;
            case 3:
                system("cls");
                cout<<"Calculadora - Multiplica��o"<<endl;

                cout<<"Digite o 1� valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2� valor: ";
                cin>>calc.num2;

                calc.multiplicar();
                message(); 
                break;
            case 4:
                system("cls");
                cout<<"Calculadora - Divis�o"<<endl;

                cout<<"Digite o 1� valor: ";
                cin>>calc.num1;
                cout<<"Digite o 2� valor: ";
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