#ifndef ESTOQUE_H
#define ESTOQUE_H
#include <map>
#include <vector>
#include "Livro.h"

using namespace std;

class Estoque {
private:
    int id;

    map<int, class Livro*> livros;
    int totEstq;

public:
    Estoque(int totEstq = 0, int id = 0);

    int getTotEstoq();

    bool addLivro(Livro* livro);
    class Livro* venderLivro(int id);
    map<int, class Livro*> getLivros();

};

#endif // ESTOQUE_H
