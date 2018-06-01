#ifndef LIVROCOMEDIA_H
#define LIVROCOMEDIA_H

#include <string>
#include "Livro.h"

using namespace std;

class LivroComedia: public Livro{
protected:
    bool capaBrochura;

public:
    LivroComedia(string nome, float valor, int qntEstoque, bool capaBrochura);
    void toString();
};

#endif // LIVROCOMEDIA_H
