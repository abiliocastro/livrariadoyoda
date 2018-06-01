#ifndef LIVROAVENTURA_H
#define LIVROAVENTURA_H

#include <string>
#include "Livro.h"

using namespace std;

class LivroAventura: public Livro {
protected:
    string ilustracoes;

public:
    LivroAventura(string nome, float valor, int qntEstoque, string ilustracoes);
    void toString();
};

#endif // LIVROAVENTURA_H
