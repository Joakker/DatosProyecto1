#ifndef TRIE_H_INCLUDED
#define TRIE_H_INCLUDED


    #include <string>

    // Desde la 'a' hasta la 'z', sin contar ñ, más '$'
    #define NUM_LETTERS 27
    #define EOS         '$'
    #define AS_INDEX(c) c - 'a'

    struct TrieNode {
        char c;
        struct TrieNode* children[NUM_LETTERS];
    };
    
    class Trie {
        private:
            struct TrieNode* root;
        public:
            Trie();
            ~Trie();
            void add_word(std::string);
            bool search(std::string);
    };

#endif