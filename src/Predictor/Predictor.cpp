#include "Predictor.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

Predictor::Predictor(Trie t){
	this->t = t;
	this->root = this->t->getNode(); 
}

Predictor::~Predictor(){
	delete root;
	delete t;
}
//funcion recursiva para imprimir coincidencias con el prefijo especificado
void Predictor::suggestions(string prefix){
	//se comprueba si es el final de la palabra y se imprime en caso de que corresponda al prefijo
	if(this->root->children[26]->c==EOS){
		cout<<prefix<<endl;
	}
	//en caso de que no queden nodos hijos correspondientes al prefijo se termina el metodo
	if(t->isLastNode()){
		return;
	}
	//
	for(int i=0;i<NUM_LETTERS;i++){
		//en caso de haber un hijo en la posicion i
		if(this->root->children[i]){
			//se agrega el caracter correspondiente del hijo, en base al codigo ASCII
			prefix.push_back(97+i);
			//se recurre nuevamente a la función
			suggestions(prefix);
			//se elimina el ultimo caracter
			prefix.pop_back();
		}
	}
}
