#include <iostream>
using namespace std;
int peakIndexInMountainArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    
 while(s<e){
    int mid = s + (e-s)/2;
    if(arr[mid] < arr[mid+1] ){
        s = mid + 1;
    }
    else {
        e = mid;
    }
    
}
return arr[e];
}
int main() {
    
  int arr[] = {10,20,50,40,30};
  int n =5;
  cout<<"peak element is: " << peakIndexInMountainArray(arr, n);

    return 0;
}