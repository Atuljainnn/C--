#include <iostream>
using namespace std;
int firstOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
      if(arr[mid]==target){
         ans=mid;
         e=mid-1;
      }
     else if(target>arr[mid]){
         s=mid+1;}
      
     else if(target<arr[mid]){
         e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    return ans;
  }
int lastOccurance(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
      if(arr[mid]==target){
         ans=mid;
         s=mid+1;
      }
     else if(target>arr[mid]){
         s=mid+1;}
      
     else if(target<arr[mid]){
         e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    return ans;
  }
  int totalOccurance(int arr[],int n,int target){
    int total=lastOccurance(arr,n,target)-firstOccurance(arr,n,target)+1;
    return total;
  }
int main() {
    int arr[]={1,2,3,3,3,3,3,5,7,9};
    int n=10;
    int target=3;
    int totalans=totalOccurance(arr ,n,target);

    if(totalans == -1) {
    cout << "Element not found " << endl;
     }
    else {
    cout << "Element total occurance is " <<totalans<< endl;
     }
   return 0;
}