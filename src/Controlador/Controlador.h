#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <string>
#include "../Trie/Trie.h"
#include "../Predictor/Predictor.h"


class Controlador {
    private:
        Trie* trie;
        Predictor* predictor;
    public:
        Controlador(std::string);
        ~Controlador();
        void buscarCadenas(std::string, std::string, int);
};


#endif