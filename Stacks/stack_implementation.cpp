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
};
int main(){
  return 0;
}
