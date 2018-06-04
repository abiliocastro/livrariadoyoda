#include <iostream>
#include <string>
#include "LivroAventura.h"
#include "Livro.h"

using namespace std;

LivroAventura::LivroAventura(string nome, int valor, int qntEstoque, string ilustracoes):
    Livro(nome, valor, qntEstoque) {
    this->ilustracoes = ilustracoes;
}

void LivroAventura::toString(){
    cout << "ID: " << this->id
         << " | Nome: " << this->nome
         << " | R$ " << this->valor
         << " | Existe " << this->qntEstoque << " livro(s) no estoque"
         << " | Ilustracoes: " << this->ilustracoes << endl;
}

