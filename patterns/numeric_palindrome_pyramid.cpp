#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++)
   {
       for(int j=0; j<n-i-1;j++){
           cout<<" ";
       }
        for(int j=0; j<i+1;j++){
           cout<<j+1;
       }
       int var=i;
        for(int j=0; j<i;j++){
           cout<<var;
           var--;
       }
       cout<<endl;
   }

    return 0;
}