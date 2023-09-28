#include<iostream>
using namespace std;
int findOddOccuringElement(int arr[],int size) 
{
int s = 0;
int e = size-1;
int mid = s + (e-s)/2;

while(s <= e) {
  if(s==e){
    return s;
  }

  if(mid&1)
  {
      if(mid-1>=0 && arr[mid-1]==arr[mid]){
          s=mid+1;
      }else{
          e=mid-1;
      }
    }else
    {
      if(mid+1<size && arr[mid+1]==arr[mid])
      {
          s=mid+2;
      }else{
          e=mid;
      }
    }
    mid = s + (e-s)/2;
 }
 return -1;
 }
    int main() {
      int arr[]={10,10,2,2,5,5,2,2,5,5,20,11,11,10,10 };
      int size=15;
      int target=8;
      int ans=findOddOccuringElement(arr,size);
      cout<<ans;
    return 0;
}