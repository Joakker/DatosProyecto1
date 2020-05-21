#include "Trie/Trie.h"

#include <iostream>

  
int main() 
{ 
    Trie t = Trie();
    t.add_word("hello");
    if (t.search("hello")) {
        std::cout << "Hello world" << std::endl;
    } else {
        std::cout << "Goodbye cruel world" << std::endl;
    }
    return 0; 
} 