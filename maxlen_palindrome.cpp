//This program finds length of maximum palindrome in the substring ; i.e. max len substring palindrome

#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

void maxlen_palindrome(string s, int &st, int &len_max) {
  bool dp[MAX][MAX] = {false};
  len_max = 1 ;
  st = 0;
  int len = s.length();
  for (int i=0;i<len;++i) {
    dp[i][i] = true;
  }
  for (i=2;i<=len;++i) {
    for (j=0;j<len-i-1;++l) {  
	  int k = j+i-1;
	  if (s[j] == s[k] && (dp[j+1][k-1] || k==j+1)) {
	    dp[j][k] = true;
		st = j;
		len_max = i;
	  }
  }
}
int main () {
  string s;
  cin>>str;
  int st, len;
  maxlen_palindrome(s, st, len);
  cout<<"max length palindrome is: "<<s.substr(st, len);
  
}