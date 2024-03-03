#include<iostream>
using namespace std;
class Queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size){
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
  }
 void push(int val){

  //full
  if((rear==size-1&&front==0)||rear==front-1){
    cout<<"queue overflow"<<endl;
    return;
  }
  //empty
 else if(front==-1 && rear==-1){
    front++;
    rear++;
    arr[rear]=val;
  }
  //circular
  else if(rear==size-1&&front!=0){
    rear=0;
    arr[rear]=val;  
  }
  //normal
  else{
    rear++;
    arr[rear]=val;
  }

 }
 void pop(){
   //underflow
   if(front==-1 && rear==-1){
    cout<<"can't pop,underflow"<<endl;
    return;}
   //single element
   else if(front==rear){
     arr[front]=-1;
     front=-1;
     rear=-1;
   }
   //circular
   else if(front==size-1){
      arr[front]=-1;
      front=0;
   }
   //normal case
   else{
    arr[front]=-1;
    front++;
   }
 }
 
 bool isEmpty()
 {
  if(front==-1 && rear==-1)
  {
    return true;
  }else
  {
    return false;
   }
 }

int getFront(){
  if(front==-1){
     return -1;
  }else{
 return arr[front];
}
}
int getSize(){
if(front==-1 && rear==-1)
  {
    return 0;
  }else
  {
    return rear-front+1;
   }
}
int getRear() {
 if(rear==-1){
    return -1;
   }else{
       return arr[rear];
        }  
    }
   bool isFull() {
      if((front==0&&rear==size-1)||(rear==front-1)){
        return 1;
       }else{
         return 0;
      }
      }
void print(){
  //just for check queue
  cout<<"printing queue:";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


};
int main(){
  Queue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  
 cout<<"size of queue is:"<<q.getSize()<<endl;
 cout<<"Front element of queue is:"<<q.getFront()<<endl;
 cout<<"rear element of queue is:"<<q.getRear()<<endl;
 q.print();
 q.pop();
 q.pop();
 
 cout<<"size of queue is:"<<q.getSize()<<endl;
 cout<<"Front element of queue is:"<<q.getFront()<<endl;
 cout<<"rear element of queue is:"<<q.getRear()<<endl;
 q.print();
 if(q.isEmpty()){
  cout<<"queue is empty"<<endl;
 }else{
  cout<<"queue is not empty"<<endl;
 }
  return 0;
}

