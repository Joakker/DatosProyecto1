#include "Controlador/Controlador.h"
  
int main(int argc, char* argv[]) {
    if (argc == 5) {
        Controlador c(argv[1]);
        c.buscarCadenas(argv[2], argv[3], std::stoi(argv[4]));
    }
    return 0; 
} 