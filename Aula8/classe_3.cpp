// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h

using namespace std;

class Aluno { // A classe te o nome de Contacto
    public: // Especificação de acesso. public e private(por defeito)
        int idAluno; // atributo, propriedade, variável membro
        string nomeAluno;
        float nota1Aluno;
        float nota2Aluno;

        // método construtor
        Aluno(int num, string nom, float n1, float n2) {
            idAluno= num;
            nomeAluno= nom;
            nota1Aluno= n1;
            nota2Aluno= n2;
        }

        // método
        void notaFinal(){
            float media;
            media= (nota1Aluno+nota2Aluno)/2;
            cout<<"Notas do aluno"<<endl;
            cout<<"1ª nota: "<<nota1Aluno<<endl;
            cout<<"2ª nota: "<<nota2Aluno<<endl;
            cout<<"Média: "<<media<<endl;
            if(media>=10) {
                cout<<endl<<"O aluno está aprovado!";
            } else {
                cout<<endl<<"O aluno está reprovado!";
            }

        }
};



int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    string nom;
    float n1, n2;

    cout<<"Digite o nº do aluno: ";
    cin>>num;

    cout<<"Digite o nome do aluno: ";
    cin>>nom;

    cout<<"Digite o 1ª nota do aluno: ";
    cin>>n1;

    cout<<"Digite o 2ª nota do aluno: ";
    cin>>n2;

    Aluno aluno(num, nom, n1, n2);

    cout<<endl<<"Nº do aluno: "<<aluno.idAluno;
    cout<<endl<<"Nome do aluno: "<<aluno.nomeAluno<<endl;
    aluno.notaFinal();


    return 0;
}