// UFCD 0810 - Aula 8 - 02/05/2024 - Marcos Melo

#include <iostream>
#include <clocale> // equivalente em C locale.h

using namespace std;

class Contacto { // A classe te o nome de Contacto
    public:      // Especificação de acesso. public e private(por defeito)
        int idContacto; // atributo, propriedade, variável membro
        string nomeContacto;
};



int main() {
    setlocale(LC_ALL, "Portuguese");
    // criar uma instância/objecto da classe Contacto
    Contacto c1;
    c1.idContacto= 1;
    c1.nomeContacto= "Ana Maria Silva";

    cout<<"Id: "<<c1.idContacto<< " - Nome: " <<c1.nomeContacto;


    return 0;
}