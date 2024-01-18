#include<iostream>
using namespace std;
int add_fun(int a,int b){
  int sum=a+b;
  return sum;
}


int main() {

    int a,b;
    cout<<"Enter value of a and b"<<endl;
    cin>>a>>b;
    int sum = add_fun(a,b);
    cout<<"sum of two number:"<<sum;

    return 0;
}