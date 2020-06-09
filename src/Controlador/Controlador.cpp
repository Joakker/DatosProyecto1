#include "Controlador.h"
#include <iostream>
#include <fstream>


Controlador::Controlador(std::string diccionario) {
    std::ifstream input(diccionario);
    std::string palabra;
    trie = new Trie();
    while (input >> palabra) {
        trie->add_word(palabra);
    }
    predictor = new Predictor(trie);
}


Controlador::~Controlador() {
   // delete predictor;
}


void Controlador::buscarCadenas(std::string input, std::string output, int k) {
    std::ifstream cadenas(input);
    std::ofstream resultado(output);
    
    std::string palabra;
    
    while (cadenas >> palabra) {
        predictor->printSuggestions(palabra, k);
    }
}