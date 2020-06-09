#include "../Trie/Trie.h"
class Predictor{
	private:
		struct TrieNode* root;
		Trie *t;
		std::vector<std::pair<int,std::string>> v;
		int aux;
	public:
		Predictor(Trie* t);
		~Predictor();
		void suggestions(std::string prefix,int k);
		int printSuggestions(std::string prefix,int k);
};