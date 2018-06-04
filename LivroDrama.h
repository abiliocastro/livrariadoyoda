#ifndef LIVRODRAMA_H
#define LIVRODRAMA_H

#include <string>
#include "Livro.h"

using namespace std;

class LivroDrama: public Livro {
private:
    bool capaDura;

public:
    LivroDrama(string nome, int valor, int qntEstoque, bool capaDura);

    void setCapaDura(bool capa);
    void toString();
};

#endif // LIVRODRAMA_H
