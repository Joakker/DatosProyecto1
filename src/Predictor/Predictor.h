#include "../Trie/Trie.h"

class Predictor{
	private:
		struct TrieNode* root;
		Trie *t;
	public:
		Predictor(Trie t);
		~Predictor();
		void suggestions(std::string prefix);
};