#include<iostream>
using namespace std;
int main(){

  int arr[5]={3,5,6,7,8};
  int n=5;
  int target=6;
  bool flag=0;
 
  for(int i=0;i<n;i++){
   if(arr[i]==target){
      flag=1;
      break;
   }
  }
  if(flag){
      cout<<"element found"<<endl;
  }else{
      cout<<"element not found"<<endl;
  }
  
  return 0;
}