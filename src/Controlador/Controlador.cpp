#include "Controlador.h"
#include <iostream>
#include <fstream>


Controlador::Controlador(char* filename) {
    this->trie = new Trie();
    std::ifstream   input(filename);
    
    std::string palabra;
    int frecuencia;
    
    while (input >> palabra >> frecuencia) {
        trie->add_word(palabra);
    }
    
    if (trie->search("hello")) {
        std::cout << "Nyello~" << std::endl;
    }
    
}


Controlador::~Controlador() {
    delete trie;
}