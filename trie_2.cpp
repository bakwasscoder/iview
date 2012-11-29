#include <iostream>
using namespace std;

#define ALPHABETS 26
class node {
	char val;
	bool isEnd;
	node* edges[ALPHABETS]
	node() {
		val = '\0';
		isEnd = false;
		for(i=0;i<ALPHABETS;i++) {
			edges[i] = NULL;
		}		
	}
};

class Trie {
	node * root;
	Trie() {
		root = new node();
	}
	bool insert(char *str) {
		if (!str) return;
		char *s = str;
		node *curr = root;
		while(*str) {
			char c = toupper(*str) - 'A'; //Storing each char in caps ; additonal info of originality could be stored in node class
			if (!curr->edges[c]) {
				node *new_node = new node();
				curr->edges[c] = new_node;
				curr = new_node;
			} else {
				curr = curr->edges[c];
			}
			s++;
		}
		curr->isEnd = true;
	}
};
