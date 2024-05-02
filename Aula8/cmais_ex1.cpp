// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    char apelido[30];
    std::cout<<"Digite o seu nome:";
    gets(nome);
    std::cout<<"Digite o seu apelido:";
    gets(apelido);
    std::cout<<"O nome inserido foi "<<nome<<std::endl; // endl -> quebra de linha
    std::cout<<"O apelido inserido foi "<<apelido<<std::endl; // endl -> quebra de linha
    std::cout<<"O nome completo é "<<apelido<<", "<<nome;

    return 0;
}