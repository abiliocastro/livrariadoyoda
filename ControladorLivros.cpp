#include <iostream>
#include <string>
#include <map>
#include "Livro.h"
#include "Estoque.h"
#include "ControladorLivros.h"

using namespace std;

ControladorLivros::ControladorLivros(Estoque& estoque){
    this->estq = estoque;
}

void ControladorLivros::venderLivro(int id){
    Livro& livro = this->estq->venderLivro(id);
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

void ControladorLivros::vender(){

    system("clear");

    int id;
    cout << "[!]Vender Livro:\n";
    cout << "   [#]ID -> ";
    cin >> id;

    venderLivro(id);
}

void ControladorLivros::listLivro(){

    system("clear");

    for(pair<int,class Livro&> livro: this->estq.getLivros()){
        livro.second.toString();
    }
}


bool ControladorLivros::manager(){

    char letra;

    cout<<"[m]Menu [e]Encerrar"<<endl;
    cin>>letra;

    system("clear");

    if(letra == 'm')
        return true;

    else if(letra == 'e')
        return false;

//    else if(letra != 'm' && letra != 'e'){

    else{
       cout<<"Erro | repita operacao"<<endl;
       return manager();
    }
}


bool ControladorLivros::cadastrarLivro(Livro& livro){
    if(this->estq.addLivro(livro))
        return true;
    else
        return false;

}

bool ControladorLivros::cadastrar(){

    system("clear");

    string nome;
    float valor;
    int qntEstoque;

    cout << "[!]Cadastro de Livro:\n";
    cout << "   [#]Nome -> ";

    cin.ignore();
    getline(cin,nome);

    cout << "   [#]Valor -> ";
    cin >> valor;

    //tratar esse erro!

    //try catch

    cout << "   [#]Quantidade Estoque -> ";
    cin >> qntEstoque;

    // é preciso ter a opçao de escolher o tipo do livro
    // a ser cadastrado.

    Livro l(nome, valor, qntEstoque);

//    l.toString();

    if(this->estq.addLivro(l)) {
        cout << "[@]" << l.getNome() << " cadastrado com sucesso\n";
        return manager();

    } else {
        cout << "Não cadastrado\n";
        return manager();
    }
}



