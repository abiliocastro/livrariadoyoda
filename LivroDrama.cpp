#include <iostream>
#include <string>
#include "LivroDrama.h"
#include "Livro.h"

using namespace std;

LivroDrama::LivroDrama(string nome, float valor, int qntEstoque, bool capaDura):
    Livro(nome, valor, qntEstoque) {
    this->capaDura = capaDura;
}

void LivroDrama::setCapaDura(bool capa){
    this->capaDura = capa;
}

void LivroDrama::toString(){
    string cDura = (this->capaDura) ? ("sim") : ("nao");
    cout << "ID: " << this->id
         << " | Nome: " << this->nome
         << " | R$ " << this->valor
         << " | Existe " << this->qntEstoque << " livro(s) no estoque"
         << " | Capa Dura: " << cDura << endl;
}
