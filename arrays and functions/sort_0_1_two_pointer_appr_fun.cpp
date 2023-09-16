#include<iostream>
using namespace std;
int sortZeroOne(int arr[],int n){
    int left=0;
     for(int i=0;i<n;i++){
         
         if(arr[i]==0){
             swap(arr[left],arr[i]);
             left++;
         }
     }
     return 0;
}
int main() {
   int arr[14]={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
   int n=14;

   sortZeroOne(arr,n);
   
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}