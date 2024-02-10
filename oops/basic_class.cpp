#include<iostream>
using namespace std;
class Student{
public:

 int id;
 int age;
 string name;
 int marks;
 bool present;

 void study(){
  cout<<"studying"<<endl;
 }

 void cheating(){
  cout<<"cheating"<<endl;
 }

 void bunk(){
 cout<<"bunking"<<endl;
 }


};
int main(){

  Student s1;
  Student s2;

  s1.id=24;
  s1.age=7;
  s1.name="atul";
  cout<<s1.name<<endl;
  cout<<s1.id<<endl;
  cout<<s1.age<<endl;
  cout<<sizeof(s1)<<endl;
    return 0;
}