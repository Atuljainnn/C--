#include<iostream>
#include<queue>
using namespace std;
int main(){
  queue<int>q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  cout<<"size of queue is:"<<q.size()<<endl;
  q.pop();
  cout<<"size of queue is:"<<q.size()<<endl;
  cout<<"Front element:"<<q.front()<<endl;
  cout<<"last element:"<<q.back()<<endl;
  if(q.empty()){
    cout<<"queue is empty"<<endl;
  }
  else{
    cout<<"queue is not empty"<<endl;
  }
  return 0;

}