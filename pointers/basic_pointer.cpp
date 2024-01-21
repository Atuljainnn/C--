#include<iostream>
using namespace std;
int main(){

   int a = 5;
   cout<<"value of a : "<< a << endl;
   cout<<"address of a : "<< &a << endl;
  

  
   int* ptr = &a;
   cout<<"address store in pointer : "<<ptr << endl;
   cout<< "Accessing value stored at position pointer pointing : " << *ptr << endl;
   cout<<"Address of pointer : "<< &ptr << endl;

  int** ptr2=&ptr;
  cout<<"value at a is:"<<**ptr2;
  return 0;
}