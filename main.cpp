#include <iostream>

#include "Estoque.h"
#include "ControladorLivros.h"
#include "Livro.h"
#include "LivroDrama.h"
#include "LivroAventura.h"
#include "LivroComedia.h"

using namespace std;

int main(){

    Estoque estoque(0, 0);
    ControladorLivros controlador(estoque);

    Livro livro("Um Simples Livro", 55.99, 456);
    LivroDrama livroDrama("Drama Interessante", 4.5, 20, true);
    LivroAventura livroAventura("Aventura Fantastica", 10.99, 58, "ilustracao massa");
    LivroComedia livroComedia("Comedia Engracada", 5.99, 10, true);

    controlador.cadastrarLivro(livro);
    controlador.cadastrarLivro(livroDrama);
    controlador.cadastrarLivro(livroAventura);
    controlador.cadastrarLivro(livroComedia);


    char opc;
    bool flag = true;

    while(flag){

        cout << "||--------------------||\n";
        cout << "||  LIVRARIA DO YODA  ||\n";
        cout << "||Nao vende so yaksoba||\n";
        cout << "||--------------------||\n";
        cout << "[1]Cadastrar Livro [2]Vender Livro [3]Listar Livro [e]Encerrar\n";
        cin >> opc;

        switch(opc){

            case '1':

                if(!controlador.cadastrar())
                    flag = false;

                system("clear");

                break;

            case '2':

                controlador.vender();

                break;

            case '3':

                controlador.listLivro();

                break;

            case 'e':

                flag = false;

                break;

            default:

                system("clear");
                cout << "Opcao invalida\n";
                break;
        }
    }

    return 0;
}
