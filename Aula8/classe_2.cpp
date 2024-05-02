// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h

using namespace std;

class Aluno { // A classe te o nome de Contacto
    public: // Especifica��o de acesso. public e private(por defeito)
        int idAluno; // atributo, propriedade, vari�vel membro
        string nomeAluno;
        float nota1Aluno;
        float nota2Aluno;

        // m�todo
        void notaFinal(){
            float media;
            media= (nota1Aluno+nota2Aluno)/2;
            cout<<"Notas do aluno"<<endl;
            cout<<"1� nota: "<<nota1Aluno<<endl;
            cout<<"2� nota: "<<nota2Aluno<<endl;
            cout<<"M�dia: "<<media<<endl;
            if(media>=10) {
                cout<<endl<<"O aluno est� aprovado!";
            } else {
                cout<<endl<<"O aluno est� reprovado!";
            }

        }
};



int main() {
    setlocale(LC_ALL, "Portuguese");
    Aluno aluno; // criar o objeto aluno da Classe Aluno

    cout<<"Digite o n� do aluno: ";
    cin>>aluno.idAluno;

    cout<<"Digite o nome do aluno: ";
    cin>>aluno.nomeAluno;

    cout<<"Digite o 1� nota do aluno: ";
    cin>>aluno.nota1Aluno;

    cout<<"Digite o 2� nota do aluno: ";
    cin>>aluno.nota2Aluno;

    cout<<endl<<"N� do aluno: "<<aluno.idAluno;
    cout<<endl<<"Nome do aluno: "<<aluno.nomeAluno<<endl;
    aluno.notaFinal();


    return 0;
}