#ifndef LIVROAVENTURA_H
#define LIVROAVENTURA_H

#include <Livro.h>
#include <string>

using namespace std;

class LivroAventura: public Livro {
protected:
    string ilustracoes;

public:
    LivroAventura(int id, string nome, float valor, int qntEstoque, string ilustracoes);

};

#endif // LIVROAVENTURA_H
