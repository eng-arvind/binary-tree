#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node* left;
  struct node* right;
  node(int x)
  {
    data=x;
    left=NULL;
    right=NULL;
    }
};
typedef struct node* np;
int main()
{
  np root = new node(1);
  //cout<<root->data;
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  cout<<root->left->data;

  return 0;
}
