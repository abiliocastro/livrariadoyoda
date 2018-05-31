#include "Livro.h"
#include <iostream>
#include <string>

using namespace std;

Livro::Livro(string cnome, float cvalor, int cqntEstoque){
    nome = cnome;
    id = 0;
    valor = cvalor;
    qntEstoque = cqntEstoque;
}

Livro::~Livro(){
    cout << "Livro destruído" << endl;
}

string Livro::getNome(){
    return nome;
}

void Livro::setNome(string cnome){
    nome = cnome;
}

int Livro::getID(){
    return id;
}

void Livro::setValor(float cvalor){
    valor = cvalor;
}

float Livro::getValor(){
    return valor;
}

int Livro::getQntEstoque(){
    return qntEstoque;
}

void Livro::setQntEstoque(int cqntEstoque){
    this->qntEstoque = cqntEstoque;
}

void Livro::toString(){
    cout << "ID: " << id << " | Nome: " << nome << " | R$ " << valor << "    | Existe " << qntEstoque << " livro(s) no estoque" << endl;
}

