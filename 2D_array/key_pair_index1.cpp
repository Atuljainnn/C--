#include<iostream>
using namespace std;
void keypairIndex(int arr[],int n,int target){
    for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             if(arr[i]+arr[j]==target){
                 cout<<"Key pair found at index "<<i<<"and "<<j;
                 return ;
             }
         }
    }
    cout<<"Key pair index not found";
}

int main() {
    int  arr[]={5,6,3,4,2};
    int n=5;
    int target=10;
    keypairIndex(arr,n,target);
   
    return 0;
}