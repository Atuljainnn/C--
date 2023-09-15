#include <iostream>
#include<limits.h>
using namespace std;
int findMinimum(int arr[],int size ){
    int minAns=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minAns){
            minAns=arr[i];
        }
    }
    return minAns;   
}
int main() {
   int arr[7]={20,4,15,1,6,8,11};
   int size=7;
   int min_no;
   min_no=findMinimum(arr,size);
   cout<<"Minimum no is:"<<min_no<<endl;
    return 0;
}