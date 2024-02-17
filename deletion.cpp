#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
Node(){
  this->next=NULL;
}
Node(int data){
  this->data=data;
  this->next=NULL;
}
};
void Print(Node* &head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<endl;
}

int findlength(Node* &head){
Node* temp=head;
int count=0;
while(temp!=NULL){
  count++;
  temp=temp->next;
}
return count;
}
void insertAtHead(Node* &head,Node* &tail,int data){
  if(head==NULL){
   Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
  }else{
  Node* newNode=new Node(data);
  newNode->next=head;
  head=newNode;
  }
}
void insertAtTail(Node* &head,Node* &tail,int data){
 if(head==NULL){
    Node* newNode=new Node(data);
    head=newNode;
    tail=newNode;
  }else{
  Node* newNode=new Node(data);
  tail->next=newNode;
  tail=newNode;}
}
void insertAtMiddle(Node* &head,Node* &tail,int data,int pos){
int len=findlength(head);

if(pos<=1){
 insertAtHead(head,tail,data);
}

else if(pos>len){
 insertAtTail(head,tail,data);
}

else{
  Node* newNode=new Node(data);
  Node* prev=NULL;
  Node* curr=head;
  while(pos!=1){
    prev=curr;
    curr=curr->next;
    pos--;
  }
  prev->next=newNode;
  newNode->next=curr;
}
}

void deleteAtAnyPos(Node* &head, Node* &tail, int pos){
  if(head==NULL){
    cout<<"can not delete"<<endl;
  }
  if(head->next==NULL){
    Node* temp=head;
    delete temp;
    head=NULL;
    tail=NULL;
  }
  if(pos<=1){
     Node* temp=head;
     head=head->next;
     temp->next=NULL;
     delete temp;
     
  }}

int main(){

 Node* head=NULL;
 Node* tail=NULL;


insertAtMiddle(head,tail,5,1);
insertAtMiddle(head,tail,10,2);
insertAtMiddle(head,tail,25,3);
insertAtMiddle(head,tail,20,4);
insertAtMiddle(head,tail,30,5);
deleteAtAnyPos(head, tail,1);
deleteAtAnyPos(head, tail,1);
deleteAtAnyPos(head, tail,1);
deleteAtAnyPos(head, tail,1);

 Print(head);
 cout<<"program";
return 0;
}