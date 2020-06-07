#include "Trie.h"

class Predictor{
	private:
		struct TrieNode* root;
		Trie t;
	public:
		Predictor();
		~Predictor();
		void suggestions(string prefix);
};