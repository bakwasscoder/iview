/* 1. There is 2D linked list with each node have 2 pointers, next pointer and down pointer. Each row can have maximum 5 nodes. down pointer of 1st node of each row points to 1st node of next row, whereas down pointer of other nodes of 1st row is null. Each row is sorted(increasing) and each row's last node is less than 1st node of next row.
Write program to insert node into above such that given property is maintained. What is complexity.  */

struct node {
  node* next, down;
  int data;
};


void insert(int data, node **head) {
  node* new_node = new node;
  new_node->data = data;
  node *h = *head; 
  if (!h) {
    h = new_node;
	new_node->next = new_node->down = NULL;
	return;
  }
  bool done = false;
  node *tmp = h;
  node* adjust_it = NULL;
  while (!done) {
    if (data > tmp->data && tmp->down && data < tmp->down->data) {
	  int len = 0;
	  while (tmp && tmp->next && tmp->next->data < data) {
	    tmp = tmp->next;
		++len;
	  }
	  
	  if (!tmp->next) {
	    adjust_it = new_node;
		done = true;
		break;
	  }
	  node *tmp_2 = tmp;
	  while (tmp_2 && tmp_2->next) {
	    tmp_2 = tmp_2->next;
		++len;
	  }
	  ++len;
	  new_node->next = tmp->next->next;
	  tmp->next = new_node;
	  if (len == 5)
	    adjust_it = tmp_2;
	  else
	    adjust_it = NULL;
	  done = true;
      break;	  
	} else {
	  tmp = tmp->down;
	}
  }
  while (adjust_it) {
    tmp = 
  }
 }


1 4 7 8 9 
10 17 18 19 20    //want 2 insert 16



