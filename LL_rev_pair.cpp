// 7: swap a link-list pair wise... withour swaping data...
//1 2 3 4 -> 2 1 4 3... if odd number of element ignore last one...I gave a recursive solution and then non-recursive as well..

#include <iostream>
using namespace std;

struct node {
  node* next;
  int data;
};

node* pairWiseSwap (node* head) {
  node *temp = head , *dup;
  if (temp && temp->next) {
    head = head->next ;
    temp->next = head->next ;
    head->next = temp ;
  } else return head ;
 
  while (temp->next && temp->next->next) {
    dup = temp->next ;
    temp->next = dup->next ;
    dup->next = temp->next->next ;
    temp->next->next = dup ;
    temp = dup ;
  }
  return head ;
}

int main() {
  struct node *head = NULL;
  int i = 0;
  head = new node;
  head->data = i;
  node *tmp = head;
  while (i < 10) {
    tmp->next = new node;
	tmp->next->data = ++i;
	tmp = tmp->next;
  }
  tmp = head; while (tmp) { cout<<tmp->data<<" "; tmp = tmp->next; } cout<<endl;
  struct node* curr = head;
  //head = pairWiseSwap(head);
  //tmp = head; while (tmp) { cout<<tmp->data<<" "; tmp = tmp->next; } cout<<endl;
  //return 0;
  if (curr && curr->next) {
    node *tmp = head;
	head = head->next;
	head->next = 
  }
  while (curr && curr->next) {
	if (curr == head) {
	  cout<<"first node and head is "<<curr->data<<endl;
	  head = curr->next;
	  cout<<" and new head is "<<head->data<<endl;
	}
	node * tmp = curr->next->next;
	cout<<" tmp is: "<<tmp->data<<endl;
	cout<<"curr->next->next prev is: "<<curr->next->next->data<<endl;
	 
	curr->next->next = curr;
	cout<<"curr->next->next updated is: "<<curr->next->next->data<<endl;
	 
	curr->next = tmp;	
	cout<<"curr->next is: "<<curr->next->data<<endl;
	 
	curr = tmp;
	cout<<"curr is: "<<curr->data<<endl;
	tmp = head; while (tmp) { cout<<tmp->data<<" "; tmp = tmp->next; } cout<<endl;
	cout<<"loop end"<<endl;
  }  
  tmp = head; while (tmp) { cout<<tmp->data<<" "; tmp = tmp->next; } cout<<endl;
}


tm
//0 1 2 3 4 5 6 7 8 9
//1 0 3 2 5 4 7 6 9 8

 
