#include<iostream>
using namespace std;

bool check_sorted(int arr[],int size,int index){
 if(index>=size){
  return true;
 }
 if(arr[index]>arr[index-1] ){
   return check_sorted(arr,size,index+1);
  
 }
 else{
  return false;
 }
}

int main(){
  int arr[]={10,20,30,40,50};
  int size=5;
  int index=1;
  bool ans=check_sorted(arr,size,index);
  if(ans){
    cout<<"Sorted";
  }else{
    cout<<"Not sorted";
  }
  return 0;
}