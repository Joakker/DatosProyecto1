#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <string>
#include "../Trie/Trie.h"


class Controlador {
    private:
        Trie* trie;
    public:
        Controlador(std::string);
        ~Controlador();
};


#endif