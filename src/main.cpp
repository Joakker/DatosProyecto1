#include "Controlador/Controlador.h"
  
int main(int argc, char* argv[]) {
    if (argc >= 1) {
        Controlador c(argv[1]);
    }
    return 0; 
} 