#include <iostream>
#include <string>
#include <map>
#include "Livro.h"
#include "LivroAventura.h"
#include "LivroComedia.h"
#include "LivroDrama.h"
#include "Estoque.h"
#include "ControladorLivros.h"

using namespace std;

ControladorLivros::ControladorLivros(Estoque& estoque){
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

void ControladorLivros::vender(){
    system("clear");

    int id;
    cout << "[!]Vender Livro:\n";
    cout << "   [#]ID -> ";
    cin >> id;

    this->venderLivro(id);
}

bool ControladorLivros::listLivro(){

    system("clear");

    for(pair<int,class Livro*> livro: this->estq.getLivros()){
        livro.second->toString();
    }
    return this->manager();
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
    else{
       cout<<"Erro | repita operacao"<<endl;
       return this->manager();
    }
}

bool ControladorLivros::cadastrarIniciais(Livro* livro){
    if(this->estq.addLivro(livro)){
        return true;
    } else {
        return false;
    }
}

bool ControladorLivros::cadastrarLivro(Livro* livro){
    if(this->estq.addLivro(livro)){
        cout << "[@]" << livro->getNome() << " cadastrado com sucesso\n";
        return this->manager();
    } else {
        cout << "Não cadastrado\n";
        return manager();
    }
}

bool ControladorLivros::cadastrar(){

    system("clear");

    string nome;
    float valor;
    int qntEstoque;
    char tipo;

    cout << "[!]Cadastro de Livro:\n";
    cout << "   [#]Nome -> ";

    cin.ignore();
    getline(cin,nome);

    cout << "   [#]Valor -> ";
    cin >> valor;

    cout << "   [#]Quantidade Estoque -> ";
    cin >> qntEstoque;

    do{
        tipo = this->selecionarTipo();
        if(tipo == 's'){
            return this->manager();
        }
    }while(tipo == 'e');

    //Tipo foi preenchido
    if(tipo == 'a'){
        LivroAventura* av = this->cadastrarAventura(nome, valor, qntEstoque);
        return this->cadastrarLivro(av);
    } else if(tipo == 'c'){
        LivroComedia* co = this->cadastrarComedia(nome, valor, qntEstoque);
        if(co != nullptr)
            return this->cadastrarLivro(co);
        else
            return this->manager();
    } else if(tipo == 'd') {
        LivroDrama* dr = this->cadastrarDrama(nome, valor, qntEstoque);
        if(dr != nullptr)
            return this->cadastrarLivro(dr);
        else
            return this->manager();
    } else {
        return false;
    }
}

char ControladorLivros::selecionarTipo(){
    char tipo;
    cout << "[!]Escolha o tipo do livro conforme a letra correspondente" << endl;
    cout << "[a]aventura [c]comedia [d]drama [s]sair" << endl;
    cout << "   [#]Tipo -> ";
    cin >> tipo;
    if(tipo == 'a'){
        return 'a';
    } else if(tipo == 'c'){
        return 'c';
    } else if(tipo == 'd') {
        return 'd';
    } else if(tipo == 's') {
        return 's';
    } else {
        return 'e';
    }
}

LivroAventura* ControladorLivros::cadastrarAventura(string nome, float valor, int qntEstoque){
    string ilustracoes;
    cout << "   [#]Digite as ilustracoes -> ";
    cin.ignore();
    getline(cin, ilustracoes);

    LivroAventura* l = new LivroAventura(nome, valor, qntEstoque, ilustracoes);
    return l;
}

LivroComedia* ControladorLivros::cadastrarComedia(string nome, float valor, int qntEstoque){
    char selecionar;
    bool selecionado = false;
    do{
        cout << "   [#]Capa brochura digite [s] para sim e [n] para nao [x] para cancelar -> ";
        cin >> selecionar;
        if(selecionar == 's')
            selecionado = true;
        else if(selecionar == 'n')
            selecionado = true;
        else if(selecionar == 'x')
            return nullptr;
        else
            selecionado = false;
    }while(!selecionado);

    bool brochura = (selecionar == 's') ? true : false;
    LivroComedia* l = new LivroComedia(nome, valor, qntEstoque, brochura);
    return l;
}

LivroDrama* ControladorLivros::cadastrarDrama(string nome, float valor, int qntEstoque){
    char selecionar;
    bool selecionado = false;
    do{
        cout << "   [#]Capa dura digite [s] para sim e [n] para nao [x] para cancelar -> ";
        cin >> selecionar;
        if(selecionar == 's')
            selecionado = true;
        else if(selecionar == 'n')
            selecionado = true;
        else if(selecionar == 'x')
            return nullptr;
        else
            selecionado = false;
    }while(!selecionado);

    bool cDura = (selecionar == 's') ? true : false;
    LivroDrama* l = new LivroDrama(nome, valor, qntEstoque, cDura);
    return l;
}

void ControladorLivros::liberarMemoria(){

    system("clear");

    for(pair<int,class Livro*> livro: this->estq.getLivros()){
        delete livro.second;
    }
}



