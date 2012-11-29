#include <iostream>
#include <string>
#define MAX 1000
#define EOL '\0'
using namespace std;

char* StripSpaces (char *text)
{
  char *src = text, *dest = text;
  while (*src)
  {
    *dest = *(src++);
    //cout<<*dest;
	if (*src != ' ' || *dest != ' ')
    {
      ++dest;
    }
  }
  *dest = 0;
  printf("%s", dest);
  return dest;
}
bool isSpace(char c) {
  bool r = c == ' '? true:false;
  return r;
}
void shiftBy1FromHere(char *a, int p) {
  int l = strlen(p);
  
}
void trim(char *s) {
  int l = strlen(s);
  int i = l-1;
  while (i>=0 && isSpace(s[i]))
    i--;
  if (i != l)
    s[i+1] = EOL;
  l = i;
  i = 0;  
  while (isSpace(s[i]))
    i++;
  for(int t = i;t<l;t++)
    s[t-i] = s[i];  
  
    
}
char *stripTease(char *s) {
  int l = strlen(s);
  int i = 0;
  trim(s);
  while(i<l) {
    if (isSpace(s[i]))
	  shiftBy1FromHere()
  }  
}

int main() {
  cout<<StripSpaces(" as h    i sh  ");
}