#include<iostream>
#include<algorithm>
using namespace std;
  
int majorityElement(int a[], int size)
{
    sort(a,a+size);
    int mid=0+(size-1)/2;
   return a[mid];
    
}
int main(){
   int a[]={2,2,3,2,7,3,1,3,3};
   int size=9;
   int ans=majorityElement(a,size);
   cout<<ans;
}