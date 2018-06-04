#include <iostream>
#include "Estoque.h"
#include "ControladorLivros.h"
#include "Livro.h"
#include "LivroDrama.h"
#include "LivroAventura.h"
#include "LivroComedia.h"


using namespace std;

void inicializar(ControladorLivros&);

int main(){
    Estoque estoque(0, 0);
    ControladorLivros controlador(estoque);

    inicializar(controlador);

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
                if(!controlador.cadastrar()){
                    controlador.liberarMemoria();
                    flag = false;
                }
                    //system("clear");
                    break;

            case '2':

                    system("mario.png");
                    //controlador.vender();
                    break;

            case '3':

                    controlador.listLivro();
                    break;

            case 'e':

                    controlador.liberarMemoria();
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

void inicializar(ControladorLivros& control){
    Livro* livro = new Livro("Um Simples Livro", 55.99, 456);
    LivroDrama* livroDrama = new LivroDrama("Drama Interessante", 4.5, 20, true);
    LivroAventura* livroAventura = new LivroAventura("Aventura Fantastica", 10.99, 58, "ilustracao massa");
    LivroComedia* livroComedia = new LivroComedia("Comedia Engracada", 5.99, 10, true);

    control.cadastrarLivro(livro);
    control.cadastrarLivro(livroDrama);
    control.cadastrarLivro(livroAventura);
    control.cadastrarLivro(livroComedia);
}
