// UFCD 0810 - Aula 9 - 15/05/2024 - Marcos Melo

/*
Exercício 7
Crie uma classe em C++ por forma a registar os movimentos de uma conta bancária. Vamos
considerar os seguintes atributos:
string data, string descricao, char tipo_movimento (D ou L), float valor.
Crie um vetor dinâmico para armazenar os movimentos
->Considere os seguintes métodos:
- Registar movimento.
- Listagem de movimentos.
- Consulta de saldo.
Crie um loop na função main (menu) para solicitar ao utilizador a sua escolha.
*/


#include <iostream>
#include <vector>
#include <clocale>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y);

class Conta{
    public:
        string data;
        string descricao;
        char tipo_movimento;
        float valor;

        vector<Conta>V;

        void adicionarMovimento(Conta C){
            V.push_back(C);
        }

        void lista(){
            system("cls");            

            cout<<"Listagem de movimentos"<<endl<<endl;
            gotoxy(1,1);cout<<"Data";
            gotoxy(20,1);cout<<"Descrição";
            gotoxy(40,1);cout<<"Tipo de movimento";
            gotoxy(65,1);cout<<"Valor";  

            int yl=3;      

            for(unsigned int i=0;i<V.size();i++){   
                gotoxy(1,yl);cout<<V[i].data ;
                gotoxy(20,yl);cout<<V[i].descricao;
                gotoxy(40,yl);cout<<V[i].tipo_movimento;
                gotoxy(65,yl);cout<<V[i].valor;
                yl++;
            }
            cout<<endl<<"Fim da listagem. Enter para continuar."<<endl;
            getch();
        }

        void saldoConta(){
            system("cls");
            float saldo= 0.0;            

            for(unsigned int i=0;i<V.size();i++) {
                if(V[i].tipo_movimento == 'D'){
                    saldo+= V[i].valor;
                } else if(V[i].tipo_movimento == 'L') {
                    saldo-= V[i].valor;
                }
            }
            //lista();
            cout<<"Saldo da Conta: " << saldo << " euros"<<endl;
            cout<<endl<<"Enter para continuar..."<<endl;
            getch();
        }
};  


int main(){
    setlocale(LC_ALL,"Portuguese");

    Conta C;
    
    int opcao=0;
    
    do{
        system("cls");
        cout<<"Registo de movimento bancário"<<endl;
        cout<<"1-Registar Movimento"<<endl;
        cout<<"2-Listagem de movimentos"<<endl;
        cout<<"3-Consulta de saldo"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"Digite a sua opção: "<<endl;
        cin>>opcao;
        switch (opcao){
            case 0:
                exit(0);
            case 1:
                // registar movimento
                system("cls");
                cout<<"Registo de movimento"<<endl;
                cout<<"Data(dd/mm/aaaa): ";
                fflush(stdin);
                getline(cin, C.data);
                cout<<"Descrição: ";
                fflush(stdin);
                getline(cin, C.descricao);
                cout<<"Tipo de movimento (D-depósito L-levantamento): ";
                cin>>C.tipo_movimento;
                cout<<"Valor: ";
                cin>>C.valor;  
                C.adicionarMovimento(C);
                cout<<"Registo de movimento efectuado. Enter para continuar...";
                getch();
                break;
            case 2:
                C.lista();
                break;
            case 3:
                C.saldoConta();
                break;
            default:
                cout<<"Opção inválida. Enter para continuar..";
                getch();
        }      
        
    }while(true);

    return 0;
}

void gotoxy(int x, int y){
    COORD ponto;
    ponto.X= x; ponto.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ponto);
}