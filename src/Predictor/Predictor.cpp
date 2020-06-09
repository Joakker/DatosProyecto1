#include "Predictor.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

Predictor::Predictor(Trie* t){
	this->t = t;
	this->root = this->t->getNode(); 
}

Predictor::~Predictor(){
	delete root;
}
//funcion recursiva para imprimir coincidencias con el prefijo especificado
void Predictor::suggestions(std::string prefix){
	//se comprueba si es el final de la palabra y se imprime en caso de que corresponda al prefijo
	if(this->root->children[26]->c==EOS){
		cout<<prefix<<endl;
	}
	//en caso de que no queden nodos hijos correspondientes al prefijo se termina el metodo
	if(t->isLastNode(this->root)){
		return;
	}
	//
	for(int i=0;i<NUM_LETTERS;i++){
		//en caso de haber un hijo en la posicion i
		if(this->root->children[i]){
			//se agrega el caracter correspondiente del hijo, en base al codigo ASCII
			prefix.push_back('a'+i);
			//se recurre nuevamente a la función
			suggestions(prefix);
			//se elimina el ultimo caracter
			prefix.pop_back();
		}
	}
}
int Predictor::printSuggestions(std::string prefix){
	struct TrieNode* aux = this->root;
	//se verifica si el prefijo esta presente, si no lo esta se retorna 0
	for(int i=0;i<prefix.length();i++){
		int index = AS_INDEX(prefix[i]);
		if(!aux->children[index]){
			return 0;
		}
		aux =aux->children[index];
	}
	bool isLast= t->isLastNode(aux);
	//si la palabra esta presente, pero no hay más coincidencias, se retorna -1
	if(aux->children[26]==EOS&&isLast){
		cout<<prefix<<endl;
		return -1;
	}
	//si el prefijo esta presente y tiene más nodos debajo, se retorna 1, y se llama a la funcion suggestions
	if(!isLast){
		suggestions(prefix);
		return 1;
	}

}

