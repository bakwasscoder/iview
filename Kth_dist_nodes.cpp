
#include <iostream>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node *left, *right;
};

// A utility function to create a node
struct node* newNode( int data )
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
bool flag = false;
void path(node * root, int q) {

  if (!root) return;
 
  if (root->data == q) {
    flag = true;
	return;
  }

  path(root->left, q);
   if (flag) {
    cout<<root->data<<endl;
	return;
  }	
  path(root->right, q);

 }
 

 int main()
{
    // Let us construct the tree given in the above diagram
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    //printBoundary( root );
	cout<<"calling";
	//bool flag = false;
	path(root, 14);
 
    return 0;
}

//6440
//0447