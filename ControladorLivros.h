#ifndef CONTROLLIVRO_H
#define CONTROLLIVRO_H

#include <string>
#include <map>
#include "Livro.h"
#include "Estoque.h"

using namespace std;

//metodos:
 /* venderLivro
  * listarLivro
  * cadastrar
  * Listar*/

class ControladorLivros {
private:
    Estoque estq;
public:
    ControladorLivros(Estoque estoque);
    bool cadastrarLivro(Livro *livro);
    void venderLivro(int id);
    void listLivro();
};

#endif // CONTROLLIVRO_H
