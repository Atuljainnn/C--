#include<iostream>
using namespace std;
void merge(int arr[],int s,int e)
{
  int mid=(s+e)/2;
  int lenleft=mid-s+1;
  int lenright=e-mid;

  int *left=new int[lenleft];
  int *right=new int[lenright];
  
  int k=s;

  for(int i=0; i<lenleft;k++,i++ ){
    int left[i]=arr[k];
    k++;
  }
  k=mid+1;
   for(int i=0; i<lenright; i++ ){
    int right[i]=arr[k];
    k++;
  }

  int leftindex=0;
  int rightindex=0;
  int mainarrayindex=s;

while(leftindex<lenleft && rightindex<<lenright)
{
  if(arr[leftindex]<arr[rightindex]){
    arr[mainarrayindex]=left[leftindex];
    leftindex++;
    mainarrayindex++;
  }
  else{
    arr[mainarrayindex]=left[rightindex];
    rightindex++;
    mainarrayindex++;
   }
  }
while(leftindex<lenleft){

  arr[mainarrayindex]=left[leftindex];
  leftindex++;
  mainarrayindex++;

}
while(rightindex<lenright){

  arr[mainarrayindex]=right[rightindex];
  leftindex++;
  mainarrayindex++;
}
delete []left;
delete []right;
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
  for(int i=0;i<size; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}