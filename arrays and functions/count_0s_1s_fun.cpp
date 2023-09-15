#include <iostream>
using namespace std;
void countzeroOne(int arr[],int n){
    int onecount=0;
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zerocount++;
        }else{
            onecount++;
        }
        
    }
    cout<<"zero count:"<<zerocount<<endl<<"one count:"<<onecount<<endl;
}
int main() {
   int arr[11]={0,1,1,0,0,1,1,0,0,1,0};
   int n=11;
   countzeroOne(arr,n);

    return 0;
}