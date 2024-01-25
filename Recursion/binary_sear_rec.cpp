#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int target,int left,int right){
int mid=left+(right-left)/2;

if(left>right){
  return -1;
}
if(arr[mid] == target){
  return mid;
}
if(mid>target){
 return binary_search(arr,size,target,left,mid-1);
}else{
 return binary_search(arr,size,target,mid+1,right);
}

}
int main(){
int arr[]={10,20,30,40,50};
int size=5;
int target=30;
int left=0;
int right=size-1;
int ans=binary_search(arr,size,target,left,right);
if(ans>0){
  cout<<"Element found at index:"<<ans;
}else{
  cout<<"Element not found";
}
  return 0;
}