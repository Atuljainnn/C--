#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node* prev;
Node(){
  this->next=NULL;
  this->prev=NULL;
}

Node(int data){
  this->data=data;
  this->next=NULL;
  this->prev=NULL;
}
};


//print

void Print(Node* &head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<endl;
}

//find length

int findlength(Node* &head){
Node* temp=head;
int count=0;
while(temp!=NULL){
  count++;
  temp=temp->next;
}
return count;
}

int main(){
  
 
  Node* first=new Node(10);
  Node* second=new Node(20);
  Node* third=new Node(30);
  Node* head=first;
  Node* tail=third;
  first->next=second;
  second->next=third;
  Print(head);

  return 0;
}