#ifndef LIVRO_H
#define LIVRO_H

#include <string>

using namespace std;

class Livro{
protected:
    string nome;
    int id;
    float valor;
    int qntEstoque;

public:
    Livro(string cnome, float cvalor, int cqntEstoque);

    virtual ~Livro();

    virtual string getNome();
    void setNome(string cnome);
    int getID();
    float getValor();
    void setValor(float cvalor);
    int getQntEstoque();
    void setQntEstoque(int cqntEstoque);
    void toString();
};

#endif // LIVRO_H
