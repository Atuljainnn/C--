#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
  
}
void mergesort(int arr[],int size,int s,int e){
  if(s>=e){
    return;
  }
  int mid=(s+e)/2;
  mergesort(arr,size,s,mid);
  mergesort(arr,size,mid+1,e);
  merge(arr,s,e);
}
int main(){
  int arr[]={4,3,6,7,2,8};
  int size=6;
  int s=0;
  int e=size-1;
  mergesort(arr,size,s,e);
  return 0;
}