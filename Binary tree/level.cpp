#include<iostream>
#include<queue>
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
void preOrder(Node* root){
  if(root==NULL){
    return ;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
}
void inOrder(Node* root){
  if(root==NULL){
    return ;
  }
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
void postOrder(Node* root){
  if(root==NULL){
    return ;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" ";
}

void levelOrderTraversing(Node* root){
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
 
  while(!q.empty()){
    Node* front=q.front();
    q.pop();
    if(front==NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }else{
      cout<<front->data<<" ";
      if(front->left!=NULL){
        q.push(front->left);
      }
      if(front->right!=NULL){
        q.push(front->right);
      }
    }
  }

}


int main(){
Node* root=createTree();
cout<<root->data<<endl;
cout<<"levelorder traversing"<<endl;
levelOrderTraversing(root);
  return 0;

}