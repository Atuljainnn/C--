#include<iostream>
using namespace std;
int set_bit_count(int n){
  int count=0;
  while(n){
  n= n&(n-1);
  count++;
  }
  cout<<"Set bit count:"<<count<<endl;
}
int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  set_bit_count(n);
}