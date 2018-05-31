#include <string>
#include "LivroDrama.h"
#include "Livro.h"

using namespace std;

LivroDrama::LivroDrama(string cnome, float cvalor, int cqntEstoque, bool coverDura): Livro(cnome, cvalor, cqntEstoque) {
    capaDura = coverDura;
}

void LivroDrama::setCapaDura(bool capa){
    capaDura = capa;
}
