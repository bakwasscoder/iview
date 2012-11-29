#include <iostream>
#include <string>
#define MAX 1000
#define EOL '\0'
using namespace std;

const int CHARS = 26;
char* column_to_string(int col){
    int n = col;
    int count = 0;
    int i = 0;
    while(n > 0){
        n /= CHARS;
        count++;
    }


char* str = (char*)malloc(count + 1);
    str[count] = 0;
    n = col;
    for(i = count-1; i >= 0; i--){
        str[i] = 'A' + (n % CHARS);
        n /= CHARS;
        n--;
    }



return str;
}

char* getColumn(int colunNumber){
    int count = 0;
    int n = colunNumber;
    do{
        count++;
        n=n/26;
    }while (n);
    char* name=(char*)malloc(count+1);
    if(NULL != name){
        name[count]='\0';
        for(int i=count-1;i>=0;i-- ){
            name[i] = 'A'+colunNumber%26;
            colunNumber = colunNumber/26;
            colunNumber--;
        }
    }
    return name;
}

int main() {
  int a;
  while (1) { 
    cin>>a;
    if (a == -1) break;
    //cout<<column_to_string(a)<<endl;
	cout<<getColumn(a)<<endl;
  }
}