#include <iostream>

#include <LivroDrama.h>

using namespace std;

int main(){
    LivroDrama l1("Aventuras de LA", 4.5, 20, true);
    Livro livroSimples("Um Simples Livro", 55.99, 456);

    l1.toString();
    livroSimples.toString();

    return 0;
}

