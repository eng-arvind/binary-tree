#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int x)
  {
    data=x;
    left=NULL;
    right=NULL;
  }
};
typedef struct Node* np;
np root=NULL;
void traverse_inorder(np temp)
{
  if(temp==NULL)
  return;
  else
  {
    traverse_inorder(temp->left);
    cout<<" "<<temp->data;
    traverse_inorder(temp->right);
    //cout<<"\n";
  }
}
void traverse_preorder(np temp)
{
  if(temp==NULL)
  return;
  else
  {
    cout<<" "<<temp->data;
    traverse_preorder(temp->left);
    traverse_preorder(temp->right);
  //  cout<<"\n";
  }
}
void traverse_postorder(np temp)
{
  if(temp==NULL)
  return;
  else
  {
    traverse_postorder(temp->left);
    traverse_postorder(temp->right);
    cout<<" "<<temp->data;
  }
}
int main()
{
  root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  cout<<"Inordered:";
  traverse_inorder(root);
  cout<<"\n";
  cout<<"Prordered:";
  traverse_preorder(root);
  cout<<"\n";
  cout<<"Postordered:";
  traverse_postorder(root);
  return 0;
}
