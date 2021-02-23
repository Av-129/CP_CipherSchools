  
#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int data; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      data=k;
      left=right=NULL;
  }
};


bool search(Node *root, int value){
    if(root==NULL)
        return false;
    if(root->key==value)
        return true;
    else if(root->key>value){
        return search(root->left,value);
    }
    else{
        return search(root->right,value);
    }
} 
