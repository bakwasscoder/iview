#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
#define RED 0
#define GREEN 1
#define BLUE 2
#define FOR(i,n) for (int i=0;i<n;i++)
void dutch_flag_sort(int arr[], int len) {
  int st = 0, mid, end = len-1;
  while (st<=end && arr[st] == 0)
    st++;
  while (end>=0 && arr[end] == 2)
    end--;  
  mid = st;
  while (mid <= end) {
    if (arr[mid] == GREEN) {
	  mid++ ; 
	  continue;
	} else if (arr[mid] == RED) {
	  int tmp = arr[st];
	  arr[st] = arr[mid];
	  arr[mid] = tmp;
	  mid++; st++;
	} else {
	  int tmp = arr[mid];
      arr[mid] = arr[end];
      arr[end] = tmp;
      end--;	  
	}
  }  
  FOR(i,len) {
    cout<<arr[i]<<", ";
  }
}

//solution 2 dutch flag problem
//as only 3 values exists it can also be solved using counting sort
void threecolors(int x[], int size){

 int lo = 0, mid = 0, hi = size-1;

//move lo to a position where value is not 0
 while ( lo < size && x[lo] ==0)
  lo++;

//move hi to a position where value is not 2
 while(hi >=0 && x[hi] == 2)
  hi--;

//set mid to lo
 mid = lo;
 while (mid <= hi)
 {

 //swap with lo if mid points to 0
 //swap with hi if mid points to 1
 //increment mid if it points to 1
  if ( x[mid] == 0) {
   std::swap(x[lo],x[mid]);
   lo++;mid++;
  }
  else if (x[mid] == 1)
   mid++;
  else
  {

   std::swap(x[mid],x[hi]);
   hi--;
  }
 }
  FOR(i,size) {
    cout<<x[i]<<", ";
  }
}



int main() {
 int arr[] = {1, 2, 0, 1, 2, 0};
 //{0,0,0, 1, 1, 2, 2, 2};
 int len = sizeof(arr) / sizeof(arr[0]);
 dutch_flag_sort(arr, len);	
}



//0 0 0 1 1 2 2 2
//1 1 1 0 0 2
//2 2 0 0 1 1 1
// 2 1 0 2 1 0
// 1 2 0 1 2 0