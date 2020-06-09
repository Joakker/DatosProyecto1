#include "../Trie/Trie.h"

#include <bits/stdc++.h>

class Predictor{
	private:
		struct TrieNode* root;
		Trie *t;
		int aux;
		std::vector<std::pair<int,std::string>> v;
	public:
		Predictor(Trie* t);
		~Predictor();
		void suggestions(std::string prefix,int k);
		int printSuggestions(std::string prefix,int k);
};