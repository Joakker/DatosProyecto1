#include "Controlador/Controlador.h"
  
int main(int argc, char* argv[]) {
    if (argc >= 3) {
        Controlador c(argv[1]);
        c.buscarCadenas(argv[2], "", 1);
    }
    return 0; 
} 