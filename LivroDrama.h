#ifndef LIVRODRAMA_H
#define LIVRODRAMA_H

#include <Livro.h>
#include <string>

using namespace std;

class LivroDrama: public Livro {
private:
    bool capaDura;
public:
    LivroDrama(string cnome, float cvalor, int cqntEstoque, bool coverDura);
    void setCapaDura(bool capa);
};

#endif // LIVRODRAMA_H
