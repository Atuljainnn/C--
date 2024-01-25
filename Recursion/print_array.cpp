#include<iostream>
using namespace std;
void printarray(int arr[],int size,int index){
if(index>=size){
  return;
}
cout<<arr[index]<<" " ;
printarray( arr,size,index+1);
return;
}
int main(){
int arr[]={10,20,30,40,50};
int size=5;
int index=0;
printarray(arr,size,index);
  return 0;
}
