#include <iostream>
#include <string>
#define MAX 1000
using namespace std;

int fun (int a, int b, int c, int d) {
  if (!d) return 1;
  if (!a && !b && !c) return 0;
  return fun(a-1, b, c, d-val(a)) + fun(a, b-1, c, d-val(b)) + fun(a, b, c-1, d-val(c));
}

int fun (int arr[], int size, int sum) {
  if (sum == 0)
    return 1;
  if (size <=0 )
    return 0;
  return fun(arr, size-1, sum) + fun(arr, size, sum-arr[]);	
}

cache[sum+1][size]
FOR (i,0,size)
  cache[0][i] = 1

for (i=1, i<sum+1,i++ ) {
  for (j=0;j<size;j++) {
    //cache[i][j]   = ?
	int a = 0, b = 0;
	if (j>=1)
	  a = cache[i][j-1];
    if (i-S[j] >= 0)
	  cache[i-S[j]][j]
	cache[i][j] = a+b;
  }
  return cache[sum][size-1];
}