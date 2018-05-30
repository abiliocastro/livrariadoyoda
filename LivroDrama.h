#ifndef LIVRODRAMA_H
#define LIVRODRAMA_H


class LivroDrama : protected Livro {
private:
    bool capaDura;
public:
    LivroDrama(string cnome, float cvalor, int cqntEstoque, bool coverDura);
    bool setCapaDura(bool capa);
};

#endif // LIVRODRAMA_H
