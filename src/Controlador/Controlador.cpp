#include "Controlador.h"
#include <iostream>
#include <fstream>


Controlador::Controlador(std::string diccionario) {
    std::ifstream input(diccionario);
    std::string palabra;
    int n;
    trie = new Trie();
    while (input >> palabra >> n) {
        trie->add_word(palabra);
    }
}


Controlador::~Controlador() {
    delete predictor;
}


void Controlador::buscarCadenas(std::string input, std::string output, int k) {
    std::ifstream cadenas(input);
    std::ofstream resultado(output);
    
    std::string palabra;
    
    while (cadenas >> palabra) {
        std::cout << trie->search(palabra) << std::endl;
    }
}