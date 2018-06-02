#ifndef CONTROLLIVRO_H
#define CONTROLLIVRO_H
#include "Estoque.h"

using namespace std;

//metodos:
 /* venderLivro
  * listarLivro
  * cadastrar
  * Listar*/

class ControlLivro {

private:

    Estoque estq;

public:

    ControlLivro(Estoque estoque);
    void venderBook();
    void listBook();
    void cadastrarBook();


};

#endif // CONTROLLIVRO_H
