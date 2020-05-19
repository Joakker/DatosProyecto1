#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
    if (argc != 5) {
        std::cerr << "Llamadas al programa deben ser de la forma:" << std::endl;
        std::cerr << "\t predictor <diccionario> <cadenas> <resultados> <k>" << std::endl;
        return 1;
    }
    return 0;
}