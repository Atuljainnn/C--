#include<iostream>
using namespace std;
void shiftByOne(int arr[],int n){ 
    int temp=arr[n-1];
    int i=n-1;
    for(; i>=1; i--){
      arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main() {
    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
    shiftByOne(arr,n);
  
     for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
     }

    return 0;
}