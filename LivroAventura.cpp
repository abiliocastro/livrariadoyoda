#include <string>
#include "LivroAventura.h"
#include "Livro.h"

using namespace std;

LivroAventura::LivroAventura(int id, string nome, float valor, int qntEstoque, string ilustracoes):
    Livro(id, nome, valor, qntEstoque) {
    this->ilustracoes = ilustracoes;
}

