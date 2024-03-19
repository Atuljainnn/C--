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
Node* insertIntoBST(Node* root, int data){
if(root==NULL){
  root=new Node(data);
  return root;
}
if(data<root->data){
  root->left=insertIntoBST(root->left,data);
}else{
  root->right=insertIntoBST(root->right,data);
}
}
void createBST(Node* &root){
 int data;
 cout<<"Enter the data for root node"<<endl;
 cin>>data;
 while(data!=-1){
  root=insertIntoBST(root,data);
  cout<<"enter data"<<endl;
  cin>>data;
 }
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
  Node* root=NULL;
  createBST(root);

  levelOrderTraversing(root);
  return 0;
}