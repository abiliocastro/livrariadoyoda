#include <iostream>
#include <string>
#include "Livro.h"

using namespace std;

Livro::Livro(string nome, int valor, int qntEstoque){
    this->nome = nome;
    this->valor = valor;
    this->qntEstoque = qntEstoque;
}

Livro::~Livro(){
    cout << this->nome << " destruído" << endl;
}

string Livro::getNome(){
    return this->nome;
}

void Livro::setNome(string nome){
    this->nome = nome;
}

int Livro::getID(){
    return this->id;
}

void Livro::setID(int id){
    this->id = id;
}

void Livro::setValor(int valor){
    this->valor = valor;
}

int Livro::getValor(){
    return this->valor;
}

int Livro::getQntEstoque(){
    return this->qntEstoque;
}

void Livro::setQntEstoque(int qntEstoque){
    this->qntEstoque = qntEstoque;
}

