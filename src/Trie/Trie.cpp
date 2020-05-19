#include "Trie.h"

#include <cstdlib>


struct Nodo* crea_nodo(char c) {
    struct Nodo* aux = (struct Nodo*) malloc(sizeof(struct Nodo));
    aux->hojas = nullptr;
    aux->valor = c;
    return aux;
}


Trie::Trie() {
    this->root = crea_nodo('\0');
}