#include<iostream>
#include<cmath>
using namespace std;

int binary_to_decimal(int n){
  int binary=0;
  int i=0;
    while(n>0){
      int bit=(n&1);
      binary=binary+bit*pow(10,i++);
      n=n>>1;
    }
  cout<<binary;
 }

int main(){
  int n;
  cin>>n;
  binary_to_decimal(n);
  return 0;
}