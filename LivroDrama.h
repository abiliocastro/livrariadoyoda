#ifndef LIVRODRAMA_H
#define LIVRODRAMA_H

#include <Livro.h>
#include <string>

using namespace std;

class LivroDrama: public Livro {
private:
    bool capaDura;
public:
    LivroDrama(int id, string nome, float valor, int qntEstoque, bool capaDura);
    void setCapaDura(bool capa);
};

#endif // LIVRODRAMA_H
