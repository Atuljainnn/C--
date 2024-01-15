#include<iostream>
using namespace std;
bool Is_even(int n){
  if((n&1)==0){

    return true;
  }
  else{
   return false;
 
  }
}

int main(){
int n;
cout<<"enter the number";
cin>>n;
bool ans=Is_even(n);
if(ans){
  cout<<"even number";
}else{
  cout<<"odd number";
}
return 0;
}