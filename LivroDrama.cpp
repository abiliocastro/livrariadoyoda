#include <string>
#include "LivroDrama.h"
#include "Livro.h"

using namespace std;

LivroDrama::LivroDrama(int id, string nome, float valor, int qntEstoque, bool capaDura):
    Livro(id, nome, valor, qntEstoque) {
    this->capaDura = capaDura;
}

void LivroDrama::setCapaDura(bool capa){
    this->capaDura = capa;
}
