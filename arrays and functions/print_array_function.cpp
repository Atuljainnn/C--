#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    cout<<"Array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

  int arr[5]={3,5,6,7,8};
  int n=5;
 printarray(arr,n);
  
  return 0;
}