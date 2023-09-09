#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n>9){
        cout<<"please enter valid number";
        
    }else{
    for(int i=0;i<n;i++){
        for (int k=0;k<8-i;k++){
            cout<<"*";
        }
        for(int j=0;j<(2*i)+1;j++){
         if(j%2==0){
             cout<<i+1;
         }else{
             cout<<"*";
         }
                
            }
        for (int k=0;k<8-i;k++){
            cout<<"*";
        }
               cout<<endl;
        }}
   
    return 0;
}