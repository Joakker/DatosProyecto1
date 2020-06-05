#include "Trie.h"


#include <cstdlib>


struct TrieNode* newNode(char c) {
    struct TrieNode* aux = (struct TrieNode*) malloc(sizeof(struct TrieNode));
    aux->c = c;
    
    for (int i = 0; i < NUM_LETTERS; i++)
        aux->children[i] = NULL;
    
    return aux;
}


Trie::Trie() {
    this->root = newNode('\0');
}

Trie::~Trie() {
    free(this->root);
}

void Trie::add_word(std::string word) {
    struct TrieNode* aux = this->root;
    
    for (int i = 0; i < word.length(); i++) {
        int index = AS_INDEX(word[i]);
        
        if (aux->children[index] == NULL) {
            aux->children[index] = newNode(word[i]);
        }
        aux = aux->children[index];
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

bool Trie::isLastNode(){
    struct TrieNode* aux= this->root;

    for(int i=0;i< word.length();i++) {
        if(aux->children[i]){
            return true;
        }
    }
    return false;
}