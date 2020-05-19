#ifndef TRIE_H_INCLUDED
#define TRIE_H_INCLUDED


    struct Nodo {
        char valor;
        struct Nodo** hojas;
    };
    
    #define TO_INDEX(c) c - 'a'

    class Trie {
        private:
            struct Nodo *root;
        public:
            Trie();
            ~Trie();
            void add_palabra(char*);
    };

#endif