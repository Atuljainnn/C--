#include<iostream>
using namespace std;
int findPivotIndex(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(s==e){
        return s;
    }
    if(mid+1<size&& arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(mid-1>=0 && arr[mid]<arr[mid-1]){
        return mid-1;
    }
    else if(arr[mid]>arr[s]){
        s=mid+1;
    }else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return -1;
    
}
int binarySearch(int arr[],int s,int e,int target)
{
  
  
  int mid=s+(e-s)/2;
  while(s<=e)
  {  
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      s=mid+1;
      }
    else if(arr[mid]>target){
     e=mid-1;
    }
  mid=s+(e-s)/2;
  }
  return -1;
}

int search(int arr[],int size,int target){
  int ans=-1;
  int pivotIndex=findPivotIndex(arr,size);
  if(target>=arr[0]&&target<=arr[pivotIndex]){
  ans=binarySearch(arr,0,pivotIndex,target);
  }else{
    ans=binarySearch(arr,pivotIndex+1,size-1,target);
  }
  
  return ans;
}


 int main() {
 int arr[]={12,14,16,2,4,6,8,10};
 int size=8;
 int target=19;
 int index=search(arr,size,target);
 if(index>=0){
  cout<<"Element found at index: "<<index;
 }else{
  cout<<"Element not found";
 }
 return 0;
}