#include <iostream>
#include <string>
#include <map>
#include "Livro.h"
#include "Estoque.h"
#include "ControladorLivros.h"

using namespace std;

ControladorLivros::ControladorLivros(Estoque estoque){
    this->estq = estoque;
}

void ControladorLivros::venderLivro(int id){
    Livro* livro = this->estq.venderLivro(id);
    if(livro != nullptr){
        int qtd = livro->getQntEstoque();
        if(qtd > 0){
            qtd--;
            livro->setQntEstoque(qtd);
            cout << "Livro vendido com sucesso" << endl;
        } else {
            cout << "Quantidade do livro igual a 0" << endl;
        }
    } else {
        cout << "Livro nao encontrado" << endl;
    }
}

void ControladorLivros::listLivro(){
    //map<int, class Livro*>::iterator it;
    for(pair<int,class Livro*> livro: this->estq.getLivros()){
        livro.second->toString();
    }
}

bool ControladorLivros::cadastrarLivro(Livro *livro){
    if(this->estq.addLivro(livro))
        return true;
    else
        return false;

}



