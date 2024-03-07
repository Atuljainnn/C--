#include<iostream>
using namespace std;
class DeQue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  DeQue(int size){
    arr=new int[size];
    this->size=size;
    front=-1;
    rear=-1;
  }
 void push_back(int val){

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
 void push_front(int val){

  //full
  if((rear==size-1&&front==0)||rear==front-1){
    cout<<"queue overflow"<<endl;
    return;
  }
  //empty
 else if(front==-1 && rear==-1){
    front++;
    rear++;
    arr[front]=val;
  }
  //circular
  else if(front==0 && rear!=size-1){
    front=size-1;
    arr[front]=val;  
  }
  //normal
  else{
    front--;
    arr[front]=val;
  }

 }
 void pop_front(){
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
  void pop_back(){
   //underflow
   if(front==-1 && rear==-1){
    cout<<"can't pop,underflow"<<endl;
    return;}
   //single element
   else if(front==rear){
     arr[rear]=-1;
     front=-1;
     rear=-1;
   }
   //circular
   else if(rear==0){
      arr[rear]=-1;
      rear=size-1;
   }
   //normal case
   else{
    arr[rear]=-1;
    rear--;
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
  DeQue q(5);
  q.push_front(10);

  
 cout<<"size of queue is:"<<q.getSize()<<endl;
 cout<<"Front element of queue is:"<<q.getFront()<<endl;
 cout<<"rear element of queue is:"<<q.getRear()<<endl;
 q.print();
 q.pop_back();
 
 
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
