#include "Livro.h"
#include <iostream>
#include <string>

using namespace std;

Livro::Livro(int id, string nome, float valor, int qntEstoque){
    this->nome = nome;
    this->id = id;
    this->valor = valor;
    this->qntEstoque = qntEstoque;
}

Livro::~Livro(){
    //cout << "Livro destruído" << endl;
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

