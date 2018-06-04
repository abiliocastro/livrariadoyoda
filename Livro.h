#ifndef LIVRO_H
#define LIVRO_H

#include <string>

using namespace std;

class Livro{
protected:
    string nome;
    int id;
    int valor;
    int qntEstoque;

public:
    Livro(string nome, int valor, int qntEstoque);
    virtual ~Livro();

    virtual string getNome();
    void setNome(string cnome);
    int getID();
    void setID(int id);
    int getValor();
    void setValor(int cvalor);
    int getQntEstoque();
    void setQntEstoque(int cqntEstoque);
    virtual void toString() = 0;
};

#endif // LIVRO_H
