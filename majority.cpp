#include<iostream>
#include<algorithm>
using namespace std;
  
int majorityElement(int a[], int size)
{
    sort(a,a+size);
    int mid=0+(size-1)/2;
   return mid;
    
}
int main(){
   int a[]={2,2,3,3,3,3,1,3,4};
   int size=9;
   int ans=majorityElement(a,size);
   cout<<ans;
}