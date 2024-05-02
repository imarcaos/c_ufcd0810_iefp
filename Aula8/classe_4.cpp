// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h
#include <vector>
#include <windows.h>

using namespace std;

class Aluno{ // A classe tem o nome de Aluno
    public:     // Especifica��o de acesso. public e private.
        int idAluno; // Atributo, propriedade, vari�vel membro
        string nomeAluno;
        float nota1Aluno;
        float nota2Aluno;

        vector<Aluno>V; // criar um array do tipo classe Aluno com o nome V 

        void notaFinal(){
            float media;
            media=(nota1Aluno+nota2Aluno)/2;
            cout<<endl<<"Notas do aluno:"<<endl;
            cout<<"1� nota:"<<nota1Aluno<<endl;
            cout<<"2� nota:"<<nota2Aluno<<endl;
            cout<<"M�dia:"<<media<<endl;
            if(media>=10){
                cout<<endl<<"O aluno est� aprovado";
            }
            else{
                cout<<endl<<"O aluno est� reprovado";
            }
        }

        void adicionarAluno(Aluno A){
            V.push_back(A);
        }

        void listaAluno(){
            for(unsigned int i=0;i<V.size();i++){
                cout<<V[i].idAluno<<" - "<<V[i].nomeAluno<<" - "<<V[i].nota1Aluno
                <<" - "<<V[i].nota2Aluno<<endl;
            }
        }
};

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    Aluno aluno;
    int opcao=0;

    do{
        system("cls");
        cout<<"Notas de alunos"<<endl;
        cout<<"1-Registar o aluno"<<endl;
        cout<<"2-Listagem de notas"<<endl;      
        cout<<"0-Terminar"<<endl;
        cout<<"Digite a sua op��o:"<<endl;
        cin>>opcao;
        switch(opcao){
            case 1:
                system("cls");
                cout<<"Registo de aluno"<<endl;
                cout<<"Digite o n� do aluno:";
                cin>>aluno.idAluno;

                cout<<"Digite o nome do aluno:";
                cin>>aluno.nomeAluno;

                cout<<"Digite a 1� nota do aluno:";
                cin>>aluno.nota1Aluno;

                cout<<"Digite a 2� nota do aluno:";
                cin>>aluno.nota2Aluno;            
                aluno.adicionarAluno(aluno);
                cout<<endl<<"Registo efetuado."<<endl;
                Sleep(2000);                
                break;
            case 2:
                system("cls");
                cout<<"Listagem de alunos"<<endl;            
                aluno.listaAluno();
                cout<<endl<<"Fim da listagem."<<endl;
                Sleep(2000);
                break;    
        }
    
    }while(opcao!=0);

    return 0;
}