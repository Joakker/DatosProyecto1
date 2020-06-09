#include "Trie.h"
#include <time.h>
#include <stdlib.h>

#include <cstdlib>

using namespace std;

struct TrieNode* newNode(char c) {
    struct TrieNode* aux = (struct TrieNode*) malloc(sizeof(struct TrieNode));
    aux->c = c;
    aux->frequency = 0;
    
    for (int i = 0; i < NUM_LETTERS; i++)
        aux->children[i] = NULL;
    
    return aux;
}


Trie::Trie() {
    this->root = newNode('\0');
}

Trie::~Trie() {
    free(root);
}

void Trie::add_word(std::string word) {
    struct TrieNode* aux = this->root;
    srand(time(NULL));
    int n = rand()%1001;
    for (int i = 0; i < word.length(); i++) {
        int index = AS_INDEX(word[i]);
        
        if (aux->children[index] == NULL) {
            aux->children[index] = newNode(word[i]);
        }
        aux = aux->children[index];
        aux->frequency += n;
    }
    aux->children[NUM_LETTERS - 1] = newNode(EOS);
}


bool Trie::search(std::string word) {
    struct TrieNode* aux = this->root;
    
    for (int i = 0; i < word.length(); i++) {
        int index = AS_INDEX(word[i]);
        if (aux->children[index] == NULL) {
            return false;
        }
        aux = aux->children[index];
    }
    return (aux != NULL && aux->children[NUM_LETTERS - 1] != NULL);
}

bool Trie::isLastNode(struct TrieNode* root){
    struct TrieNode* aux= root;
    
    for(int i=0;i<NUM_LETTERS-1;i++) {
        if(aux->children[i]){
            return true;
        }
    }
    return false;
}
int getFrequency(){
    return frequency;
}
struct TrieNode* Trie::getNode(){
    return this->root;
}