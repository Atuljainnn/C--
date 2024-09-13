#include<iostream>
using namespace std;

int moveAllNegToLeft(int arr[],int size){
 int l=0;
 int h=size-1;
 
 while(l<h){

  if(arr[l]<0){
    l++;
  }
  else if(arr[h]>0){
    h--;
  }else{
    swap(arr[l++],arr[h--]);
  }

 }

}

int main(){
  int arr[]={-2,-3,-4,-4,5,-9};
  int size=6;
  moveAllNegToLeft(arr,size);

  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }


  return 0;

}