#ifndef CONTROLLIVRO_H
#define CONTROLLIVRO_H

#include <string>
#include <map>
#include "Livro.h"
#include "LivroAventura.h"
#include "LivroComedia.h"
#include "LivroDrama.h"
#include "Estoque.h"

using namespace std;

class ControladorLivros {
private:
    Estoque estq;

public:
    ControladorLivros(Estoque&);

    bool cadastrarIniciais(Livro* livro);
    bool cadastrarLivro(Livro* livro);
    bool cadastrar();
    LivroAventura* cadastrarAventura(string nome, float valor, int qntEstoque);
    LivroComedia* cadastrarComedia(string nome, float valor, int qntEstoque);
    LivroDrama* cadastrarDrama(string nome, float valor, int qntEstoque);
    char selecionarTipo();
    void venderLivro(int id);
    void vender();
    bool listLivro();
    bool manager();
    void liberarMemoria();
};

#endif // CONTROLLIVRO_H
