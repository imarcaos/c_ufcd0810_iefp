// UFCD 0810 - Aula 9 - 15/05/2024 - Marcos Melo

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
#include <conio.h>

using namespace std;

class Calculadora{
public:
    float num1;
    float num2;

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
    Calculadora calc;
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
            getch();  // funciona com a biblioteca <conio.h>, aguarda entrada do teclado
            continue; // volta para o inicio do ciclo 
        }


        cout<<"Digite o 1� n�mero:";
        cin>>calc.num1;

        cout<<"Digite o 2� n�mero:";
        cin>>calc.num2;

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