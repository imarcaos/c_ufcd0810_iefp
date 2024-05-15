// UFCD 0810 - Aula 9 - 15/05/2024 - Marcos Melo



#include <iostream>
#include <vector>
#include <clocale>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y);

class Funcionario{
public:
    int idFuncionario;
    string nomeFuncionario;
    float salarioFuncionario;

    vector<Funcionario>V;     

    void adicionarFuncionario(Funcionario F){
        V.push_back(F);
    }

    void lista(){
        system("cls");
        gotoxy(1,1);cout<<"Id";
        gotoxy(5,1);cout<<"Nome";
        gotoxy(30,1);cout<<"Sal�rio";

        int yl=3;

        for(unsigned int i=0;i<V.size();i++){   
            gotoxy(1,yl);cout<<V[i].idFuncionario;
            gotoxy(5,yl);cout<<V[i].nomeFuncionario;
            gotoxy(30,yl);cout<<V[i].salarioFuncionario;
            yl++;
        }
        cout<<endl<<"Digite Enter para continuar."<<endl;
        getch();
    }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    Funcionario F;

    int opcao=0;

    do{
        system("cls");
        cout<<"Registo de funcion�rios"<<endl;
        cout<<"1-Novo funcion�rio"<<endl;
        cout<<"2-Lista de funcion�rios"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"Digite a sua op��o:";
        cin>>opcao;
        switch(opcao){
            case 0:
                exit(0);
            case 1:
                system("cls");
                cout<<"Digite o n�mero do funcionario:";
                cin>>F.idFuncionario;getchar();
                cout<<"Digite o nome do funcionario:";
                getline(cin,F.nomeFuncionario);
                cout<<"Digite o sal�rio do funcionario:";
                cin>>F.salarioFuncionario;  
                F.adicionarFuncionario(F);              
                break;
            case 2:
                F.lista();
                break;
            default:
                cout<<endl<<"Op��o inv�lida."<<endl;
                getch();    
        }

    }while(true);

    return 0;
}

void gotoxy(int x, int y){
    COORD ponto;
    ponto.X=x; ponto.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),ponto);
}