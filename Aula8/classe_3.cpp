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

        // m�todo construtor
        Aluno(int num, string nom, float n1, float n2) {
            idAluno= num;
            nomeAluno= nom;
            nota1Aluno= n1;
            nota2Aluno= n2;
        }

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

    int num;
    string nom;
    float n1, n2;

    cout<<"Digite o n� do aluno: ";
    cin>>num;

    cout<<"Digite o nome do aluno: ";
    cin>>nom;

    cout<<"Digite o 1� nota do aluno: ";
    cin>>n1;

    cout<<"Digite o 2� nota do aluno: ";
    cin>>n2;

    Aluno aluno(num, nom, n1, n2);

    cout<<endl<<"N� do aluno: "<<aluno.idAluno;
    cout<<endl<<"Nome do aluno: "<<aluno.nomeAluno<<endl;
    aluno.notaFinal();


    return 0;
}