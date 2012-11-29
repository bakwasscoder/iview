 #include <iostream>
 #include <vector>
 #include <string>
 using namespace std;
 #define numNodes 26
 
 class TrieNode {
   private:
     vector<TriNode *> children;
	 bool isWord;
   public:
     void insert(char * s);
	 bool exist(char *s);
 };
 
 bool TrieNode::exist(char * s) {
   if (!strlen(s))
     return false;
   unsigned int si = strlen(s);
   TrieNode *n = this;
   for (unsigned int i=0;i<si;++i) {
     if (n->children[s[i] - '0'])
	   n = n->children[s[i] - '0'];
	 else
	  return false;
   }   
   return true;
 }
 
 