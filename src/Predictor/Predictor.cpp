#include "Predictor.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

Predictor::Predictor(){
	this->t = new Trie();
	this->root = this->t->getNode(); 
}

Predictor::~Predictor(){
	delete t;
}
void Predictor::suggestions(string prefix){
	
	if(this->root->c==EOS){
		cout<<prefix<<endl;
	}
	if(t->isLastNode()){
		return;
	}
	for(int i=0;i<NUM_LETTERS;i++){
		if(this->root->children[i]){
			
		}
	}
}