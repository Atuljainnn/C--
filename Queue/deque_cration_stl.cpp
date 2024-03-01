#include<iostream>
#include<deque>
using namespace std;
int main(){
  deque<int>dq;
  dq.push_front(10);
  dq.push_back(20);
  cout<<"Front element:"<<dq.front()<<endl;
  cout<<"Back element:"<<dq.back()<<endl;
  dq.push_back(30);
  cout<<"Front element:"<<dq.front()<<endl;
  cout<<"Back element:"<<dq.back()<<endl;
  dq.push_front(5);
  cout<<"Front element:"<<dq.front()<<endl;
  cout<<"Back element:"<<dq.back()<<endl;
  cout<<"size of queue:"<<dq.size()<<endl;
  return 0;
}