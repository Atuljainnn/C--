#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n)
{
    int zerocount=0;
    int onecount=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0){
           zerocount++;
        }else{
              onecount++;
             }
    }
    int i=0;
     while(zerocount--){
         arr[i]=0;
         i++;
     }
     while(onecount--){
         arr[i]=1;
         i++;
     }
}
int main() {
    int arr[]={0,1,0,1,0,1,1,0,1};
    int n=9;
    sortZeroOne(arr,n);
  
     for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
     }

    return 0;
}