#include "LivroDrama.h"

LivroDrama::LivroDrama(string cnome, float cvalor, int cqntEstoque, bool coverDura): Livro(cnome, cvalor, cqntEstoque) {
    capaDura = coverDura;
}

bool LivroDrama::setCapaDura(bool capa){
    capaDura = capa;
}
