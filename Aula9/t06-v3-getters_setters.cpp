// UFCD 0810 - Aula 9 - 15/05/2024 - Marcos Melo



#include <iostream>
#include <clocale>
#include <conio.h>

using namespace std;

class Calculadora{
public:
    float num1;
    float num2;


    Calculadora(float n1, float n2){
        num1=n1;
        num2=n2;
    }

    // m�todo para realizar a soma dos n�meros
    float soma(){
        return num1+num2;
    }
    float subtracao(){
        return num1-num2;
    }
    float multiplicacao(){
        return num1*num2;
    }
    float divisao(){
        if(num2!=0){
            return num1/num2;
        }
        else{
            cerr<<"Erro: Divis�o por zero."<<endl;
            return 0.0;
        }
        
    }
};


int main(){
    setlocale(LC_ALL,"Portuguese");
    float a, b; 
    char operacao;
    
    do{
        system("cls");
        cout<<"Pressione (+) somar, (-) subtrair, (*) multiplicar, (/) dividir, (x) sair:";
        cin>>operacao;

        if (operacao=='x'){
            break;
        }

        if(operacao!='+' && operacao!='-' && operacao!='*' && operacao!='/'){
            cerr<<"Opera��o inv�lida."<<endl;
            getch();
            continue; // volta para o inicio do ciclo 
        }


        cout<<"Digite o 1� n�mero:";
        cin>>a;

        cout<<"Digite o 2� n�mero:";
        cin>>b;

        Calculadora calc(a,b);


        float resultado;

        switch(operacao){
            case '+':
                resultado=calc.soma();
                break;
            case '-':
                resultado=calc.subtracao();
                break;
            case '*':
                resultado=calc.multiplicacao();
                break;
            case '/':
                resultado=calc.divisao();
                break;
        }

        cout<<"Resultado:"<<resultado<<endl;
        cout<<"Pressione enter para continuar...";
        getch();
        system("cls");
        
    }while(true);

    return 0;
}