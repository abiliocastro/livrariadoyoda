#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Livro.h"
#include "Estoque.h"

using namespace std;

Estoque::Estoque(int totEstq, int id){
    this->totEstq = totEstq;
    this->id = id;
}

int Estoque::getTotEstoq(){
    return this->totEstq;
}


bool Estoque::addLivro(Livro* livro){
    for(pair<int,class Livro*> l: this->livros){
        if(l.second->getNome() == livro->getNome()) {
            int qtd = l.second->getQntEstoque();
            qtd += livro->getQntEstoque();
            l.second->setQntEstoque(qtd);
            return true;
        }
    }
    this->id++;
    livro->setID(this->id);
    this->livros[livro->getID()] = livro;

    return true;
}

class Livro* Estoque::venderLivro(int key){
    map<int,class Livro*>::iterator it;
    it = this->livros.find(key);
    if(it != livros.end()){
        return it->second;
    }else{
        return nullptr;
    }
}

map<int, class Livro*> Estoque::getLivros(){
    return this->livros;
}
