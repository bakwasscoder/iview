//By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>
#define rows 100
using namespace std;
int main() {
  int arr[rows][rows] = {0};
  int num;
  for (int i=0;i<rows;i++) {
    for (int j=0;j<=i;j++) {
      cin>>num;
      arr[i][j] = num;
    }    
  }
  for (int i=rows-2 ; i>=0 ; i--) {
    for (int j = 0;j<=i;j++) {
	  arr[i][j] = arr[i][j] + max(arr[i+1][j], arr[i+1][j+1]);
    }
  }
  cout<<endl<<endl<<"res = "<<arr[0][0];

}