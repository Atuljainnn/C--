#include<iostream>
using namespace std;
int slow_exponent(int a,int b){
  int ans=1;
for(int i=0;i<b;i++){
 ans=ans*a;
}
return ans;
}
int main(){
   int a,b;
   cout<<"enter the two number";
   cin>>a>>b;
   int ans=slow_exponent(a,b);
   cout<<ans;

return 0;
}