#include "../Trie/Trie.h"

class Predictor{
	private:
		struct TrieNode* root;
		Trie *t;
	public:
		Predictor(Trie* t);
		~Predictor();
		int printSuggestions(std::string);
		void suggestions(std::string prefix);
};