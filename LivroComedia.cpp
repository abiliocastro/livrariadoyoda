#include <string>
#include "LivroComedia.h"
#include "Livro.h"

using namespace std;

LivroComedia::LivroComedia(int id, string nome, float valor, int qntEstoque, bool capaBrochura):
    Livro(id, nome, valor, qntEstoque) {
    this->capaBrochura = capaBrochura;
}

