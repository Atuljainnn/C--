#include <iostream>
using namespace std;
int extremePrint(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        if(left==right){
        cout<<arr[left]<<" ";
        }else{
        cout<<arr[left]<<" ";
        cout<<arr[right]<<" ";
        }
     left++;
     right--;
    }
}
int main() {
   int arr[7]={10,20,30,40,50,60,70};
   int n=7;
   extremePrint(arr,n);
    return 0;
}