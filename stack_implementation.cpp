#include<iostream>
using namespace std;
class Stack{
 public:
 int* arr;
 int size;
 int top;
 
 Stack(int size){

  arr=new int[size];
  this->size=size;
  this->top=-1;
 }
 void push(int val){
    top++;
    arr[top]=val;
 }
 void pop(){
  arr[top]=-1;
  top--;
 }
};
int main(){
  return 0;
}
