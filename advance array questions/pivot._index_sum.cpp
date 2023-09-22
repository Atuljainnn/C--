#include<iostream>
using namespace std;
void pivot(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {    int lsum=0;
         int rsum=0;
         for(int j=0;j<i;j++)
        {
          lsum=arr[j]+lsum;
         }
      for(int j=i+1;j<n;j++){
          rsum=arr[j]+rsum;
    }
    if(lsum==rsum){
     cout<<i;
    }

  }
  
}

int main(){
    int arr[5]={5,1,4,2,4};
    int n=5;

    pivot(arr,n);
   
    return 0;
}