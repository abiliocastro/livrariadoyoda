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
    ControladorLivros(Estoque&);
    bool cadastrarLivro(Livro* livro);
    bool cadastrar();
    void venderLivro(int id);
    void vender();
    void listLivro();
    bool manager();
    void liberarMemoria();
};

#endif // CONTROLLIVRO_H
