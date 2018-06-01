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

    controlador.cadastrarLivro(&livro);
    controlador.cadastrarLivro(&livroDrama);
    controlador.cadastrarLivro(&livroAventura);
    controlador.cadastrarLivro(&livroComedia);

    int opc;
    do{
        cout << "||--------------------||\n";
        cout << "||  LIVRARIA DO YODA  ||\n";
        cout << "||Nao vende so yaksoba||\n";
        cout << "||--------------------||\n";
        cout << "[1]Cadastrar Livro [2]Vender Livro [3]Listar Livro [99]Sair\n";
        cin >> opc;

        switch(opc){
            case 1:
                {
                    string nome;
                    float valor;
                    int qntEstoque;
                    cout << "[!]Cadastro de Livro:\n";
                    cout << "   [#]Nome -> ";
                    cin.ignore();
                    getline(cin,nome);
                    cout << "   [#]Valor -> ";
                    cin >> valor;
                    cout << "   [#]Quantidade Estoque -> ";
                    cin >> qntEstoque;

                    Livro l(nome, valor, qntEstoque);

                    if(controlador.cadastrarLivro(&l)){
                       cout << "[@]" << l.getNome() << " cadastrado com sucesso\n";
                    } else {
                        cout << "Não cadastrado\n";
                    }
                    break;
                }
            case 2:
                {
                    int id;
                    cout << "[!]Vender Livro:\n";
                    cout << "   [#]ID -> ";
                    cin >> id;
                    controlador.venderLivro(id);
                    break;
                }
            case 3:
                {
                    controlador.listLivro();
                    break;
                }
            default:
                cout << "Opcao invalida\n";
                break;
        }
    }
    while(opc != 0);

    return 0;
}

