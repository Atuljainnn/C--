#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
         return true;
        }
    }
    return false;
    }

int main(){

  int arr[5]={33,44,66,77,88};
  int n=5;
  int target=33;
  bool ans=linearsearch(arr, n,target);
  if(ans==1){
      cout<<"Target found";
  }else{
      cout<<"Target not found";
  }
  return 0;
}