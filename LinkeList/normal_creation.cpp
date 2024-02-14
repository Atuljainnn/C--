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
}

int main(){
 Node* first=new Node(10);
 Node* second=new Node(20);
 Node* third=new Node(30);
 Node* fourth=new Node(40);
 Node* fifth=new Node(50);

 Node* head=first;
 Node* tail=fifth;

 first->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=fifth;

 Print(head);
return 0;
}