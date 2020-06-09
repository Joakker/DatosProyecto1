#include "../Trie/Trie.h"
<<<<<<< HEAD
#include <bits/stdc++.h>
=======

#include <bits/stdc++.h>

>>>>>>> aa9e7a9c6f6151e19d7351bdb24428bac6d8dba6
class Predictor{
	private:
		struct TrieNode* root;
		Trie *t;
		int aux;
		std::vector<std::pair<int,std::string>> v;
		int aux;
	public:
		Predictor(Trie* t);
		~Predictor();
		void suggestions(std::string prefix,int k);
		int printSuggestions(std::string prefix,int k);
};