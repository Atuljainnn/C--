#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  cout<<"stack size:"<<st.size()<<endl;
  cout<<"Top element of stack:"<<st.top()<<endl;

  while(!st.empty()){
    
    cout<<st.top()<<" ";
    st.pop();
  }
  
  return 0;
}