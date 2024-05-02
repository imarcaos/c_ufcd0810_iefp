// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    char apelido[30];
    cout<<"Digite o seu nome:";
    gets(nome);
    cout<<"Digite o seu apelido:";
    gets(apelido);
    cout<<"O nome inserido foi "<<nome<<endl; // endl -> quebra de linha
    cout<<"O apelido inserido foi "<<apelido<<endl; // endl -> quebra de linha
    cout<<"O nome completo é "<<apelido<<", "<<nome;

    return 0;
}