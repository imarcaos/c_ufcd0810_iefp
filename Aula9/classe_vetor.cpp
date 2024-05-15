// UFCD 0810 - Aula 9 - 15/05/2024 - Marcos Melo

#include <iostream>
#include <vector>
#include <clocale>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y);

class Viatura{
public:
    string marca;
    string matricula;
    int portas;
    float preco;

    vector<Viatura>V;     

    void adicionarViatura(Viatura F){
        V.push_back(F);
    }

    void lista(){
        system("cls");
        gotoxy(1,1);cout<<"Marca";
        gotoxy(15,1);cout<<"Matricula";
        gotoxy(30,1);cout<<"Portas";
        gotoxy(40,1);cout<<"Preço";

        int yl=3;

        for(unsigned int i=0;i<V.size();i++){   
            gotoxy(1,yl);cout<<V[i].marca;
            gotoxy(15,yl);cout<<V[i].matricula;
            gotoxy(30,yl);cout<<V[i].portas;
            gotoxy(40,yl);cout<<V[i].preco;
            yl++;
        }
        cout<<endl<<"Digite Enter para continuar."<<endl;
        getch();
    }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    Viatura F;

    int opcao=0;

    do{
        system("cls");
        cout<<"Registo de viaturas"<<endl;
        cout<<"1-Novo registo"<<endl;
        cout<<"2-Lista de viaturas"<<endl;
        cout<<"0-Sair"<<endl;
        cout<<"Digite a sua opção:";
        cin>>opcao;
        switch(opcao){
            case 0:
                exit(0);
            case 1:
                system("cls");
                cout<<"Marca:";
                fflush(stdin);
                getline(cin,F.marca);
                cout<<"Matricula:";
                fflush(stdin);
                getline(cin,F.matricula);
                cout<<"Portas:";
                cin>>F.portas;                
                cout<<"Preço:";
                cin>>F.preco;  
                F.adicionarViatura(F);              
                break;
            case 2:
                F.lista();
                break;
            default:
                cout<<endl<<"Opção inválida."<<endl;
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