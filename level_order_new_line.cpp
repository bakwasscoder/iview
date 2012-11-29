#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <iostream>

using namespace std;
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
/*Function protoypes*/
void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);
 
/* Function to print level order traversal a tree*/
void printLevelOrder(struct node* root)
{
  int h = height(root);
  int i;
  for(i=1; i<=h; i++)
    printGivenLevel(root, i);
}     
 
/* Print nodes at a given level */
void printGivenLevel(struct node* root, int level)
{
  if(root == NULL)
    return;
  if(level == 1)
    printf("%d ", root->data);
  else if (level > 1)
  {
    printGivenLevel(root->left, level-1);
    printGivenLevel(root->right, level-1);
  }
}
 
/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(node->left);
     int rheight = height(node->right);
 
     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
} 
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
void printLevelOrderNewLine(node * t) {
   if(t != NULL) {
        std::list<node*> q; //Queue to store tree nodes
		q.push_back(t);
        q.push_back(NULL); //null is the delimeter to show end  of the level
        while(!q.empty()) {
            node *n = q.front();
            q.pop_front();
            if(n == NULL) {//delimeter encountered, increase height and push NULL if q not empty 
                 cout<<endl;
				 if(!q.empty())
                    q.push_back(NULL);
            }
            else {
                cout<<n->data<<",";
				if(n->left)
                    q.push_back(n->left);
                if(n->right)
                    q.push_back(n->right);
            }
        }
    }
 
} 
 
/* Driver program to test above functions*/
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->right->right = newNode(5); 
  root->left->left->left  = newNode(6);
  root->left->left->left->left  = newNode(7);

  printf("Level Order traversal of binary tree is \n");
  printLevelOrder(root);
  cout<<endl;
  printLevelOrderNewLine(root);
 
  getchar();
  return 0;
}