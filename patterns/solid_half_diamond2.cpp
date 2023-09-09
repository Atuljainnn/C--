#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n";
    cin>>n;
  
    for(int i=0;i<(2*n)+1;i++)
   {
       int cond;
       
       if(i<n){
       cond=i+1;}
       else{
        cond=n+(n-i-1);
       }
       for(int j=0; j<cond;j++){
           cout<<"*";
       }
       
       cout<<endl;
   } 
   return 0;
}