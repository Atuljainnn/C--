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

//insert at head

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

//insert at tail

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

//insert at middle

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

//delete from any position

void deleteAtAnyPos(Node* &head, Node* &tail, int pos){
  int len=findlength(head);

  if(head==NULL){
    cout<<"can not delete"<<endl;
  }
  else if(head->next==NULL){
    Node* temp=head;
    head=NULL;
    tail=NULL;
    delete temp;
  }
  else if(pos<=1){
     Node* temp=head;
     head=head->next;
     temp->next=NULL;
     delete temp;
     
  }
  else if(pos>=len){
     Node* curr=head;
     Node* prev=NULL;
     while(curr->next!=NULL){
     prev=curr;
     curr=curr->next;
     }
     prev->next=NULL;
     tail=prev;
  }
  }

int main(){

 Node* head=NULL;
 Node* tail=NULL;


insertAtMiddle(head,tail,5,1);
insertAtMiddle(head,tail,10,2);
insertAtMiddle(head,tail,25,3);
insertAtMiddle(head,tail,20,4);
insertAtMiddle(head,tail,30,5);
Print(head);
cout<<"Printing after delete:"<<endl;
deleteAtAnyPos(head, tail,1);
deleteAtAnyPos(head, tail,5);

 Print(head);
return 0;
}