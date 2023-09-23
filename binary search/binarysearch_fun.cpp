#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
      if(arr[mid]==target){
       return mid;
      }
     else if(target>arr[mid]){
         s=mid+1;}
      
     else if(target<arr[mid]){
         e=mid-1;
      }
      mid=s+(e-s)/2;
    }
    return -1;
  }

int main() {
    int arr[]={1,3,5,6,7,8,9};
    int n=7;
    int target=5;
    int ansIndex=binarysearch(arr,n,target);

    if(ansIndex == -1) {
    cout << "Element not found " << endl;
     }
    else {
    cout << "Element found at Index: " << ansIndex << endl;
     }
   return 0;
}