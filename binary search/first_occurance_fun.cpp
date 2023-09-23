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

int main() {
    int arr[]={1,2,3,3,3,3,3,5,7,9};
    int n=10;
    int target=3;
    int ansIndex=firstOccurance(arr,n,target);

    if(ansIndex == -1) {
    cout << "Element not found " << endl;
     }
    else {
    cout << "Element first occurance found at Index: " << ansIndex << endl;
     }
   return 0;
}