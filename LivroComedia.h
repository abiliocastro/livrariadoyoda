#ifndef LIVROCOMEDIA_H
#define LIVROCOMEDIA_H

#include <Livro.h>
#include <string>

using namespace std;

class LivroComedia: public Livro{
protected:
    bool capaBrochura;

public:
    LivroComedia(int id, string nome, float valor, int qntEstoque, bool capaBrochura);
};

#endif // LIVROCOMEDIA_H
