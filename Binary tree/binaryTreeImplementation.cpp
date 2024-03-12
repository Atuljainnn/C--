#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){

  this->data=val;
  this->left=NULL;
  this->right=NULL;

  }

};
Node* createTree(){
  cout<<"Enter the value for Node";
  int data;
  cin>>data;
  if(data==-1){
    return NULL;
  }
  Node* root=new Node(data);
  cout<<"Enter the left element to the:"<< root->data<<endl;
  root->left=createTree();
  cout<<"Enter the right element to the:"<<root->data<<endl;
  root->right=createTree();
  return root;
}

int main(){
Node* root=createTree();
cout<<root->data;
  return 0;

}