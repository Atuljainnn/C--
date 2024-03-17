#include<iostream>
using namespace std;
class Node{
  int data;
  Node* left;
  Node* right;

  Node(int val){
    this->data=val;
    this->left=NULL;
    this->right=NULL;
  }
};

int main(){
  return 0;
}