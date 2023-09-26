#include<iostream>
#include<stdlib.h>
using namespace std;
int myQuotient(int dividend,int divisor)
{  
   int s=0;
   int e=dividend;
   int ans=-1;
   int mid=s+(e-s)/2;
  while(s<=e)
  {  
    if(mid*divisor==dividend){
      return mid;
    }
    else if(mid*divisor<dividend){
      ans=mid;
      s=mid+1;
      }
    else if(mid*divisor>dividend){
     e=mid-1;
    }
    mid=s+(e-s)/2;
 }
   return ans;
}

 int main(){
 int dividend=89;
 int divisor=11;
 int ans = myQuotient(abs(dividend),abs(divisor));
 if((divisor>0 && dividend<0)||(divisor<0 && dividend>0)){
     ans=0-ans;
 }
 cout<<"Final answer is: "<<ans<<endl;
 return 0;
}