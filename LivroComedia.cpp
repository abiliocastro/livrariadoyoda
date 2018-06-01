#include <iostream>
#include <string>
#include "LivroComedia.h"
#include "Livro.h"

using namespace std;

LivroComedia::LivroComedia(string nome, float valor, int qntEstoque, bool capaBrochura):
    Livro(nome, valor, qntEstoque) {
    this->capaBrochura = capaBrochura;
}

void LivroComedia::toString(){
    cout << "ID: " << this->id << " | Nome: " << this->nome << " | R$ " << this->valor << " | Existe " << this->qntEstoque << " livro(s) no estoque" << endl;
}
