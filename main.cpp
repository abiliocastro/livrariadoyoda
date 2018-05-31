#include <iostream>

#include <LivroDrama.h>
#include <LivroAventura.h>
#include <LivroComedia.h>

using namespace std;

int main(){

    Livro livro(8, "Um Simples Livro", 55.99, 456);
    LivroDrama livroDrama(5, "Drama Interessante", 4.5, 20, true);
    LivroAventura livroAventura(5, "Aventura Fantastica", 10.99, 58, "ilustracao massa");
    LivroComedia livroComedia(9, "Comedia Engracada", 5.99, 10, true);

    livro.toString();
    livroDrama.toString();
    livroAventura.toString();
    livroComedia.toString();

    return 0;
}

