#include<iostream>
using namespace std;
void printarr(int arr[],int size,int index){
  if(index>=size){
    return;
  }
  cout<<arr[index]<<" ";
  printarr(arr,size,index+1);
  return;
}
int main(){
  int arr[]={1,2,3,4,5};
  int size=5;
  int index=0;
  printarr(arr,size,index);
}