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
void insertATHead(Node* &head,Node* &tail,int data){
   if(head==NULL){
    Node* NewNode=new Node(data);
    head=NewNode;
    tail=NewNode;
   }else{
    Node* temp=head;
     Node* NewNode=new Node(data);
     NewNode->next=temp;
     head->prev=NewNode;
     head=NewNode;
   }
 }

int main(){
  
  Node* head=NULL;
  Node* tail=NULL;
  insertATHead(head,tail,5);
  Print(head);

  return 0;
}