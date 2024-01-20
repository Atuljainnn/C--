#include<iostream>
using namespace std;
void swap(int &a,int &b){
  a=a^b;
  b=a^b;
  a=a^b;
}
int main(){
  int num1,num2;
  cout<<"Enter the number :"<<endl;
  cin>>num1>>num2;
  swap(num1,num2);
  cout<<"num1 is:"<<num1<<endl<<"num2 is:"<<num2<<endl;
}