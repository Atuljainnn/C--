#include<iostream>
using namespace std;
class Student{
private:
  string gf;
public:
 int id;
 int age;
 string name;
 int marks;
 bool present;

//default ctor
 Student(){
  cout<<"Default ctor called"<<endl;
}
//parameeterized ctor

Student(int _id,int _age,string _name,int _marks,bool _present,string  _gf){
  id=_id;
  age=_age;
  name=_name;
  marks=_marks;
  present=_present;
  gf=_gf;
  cout<<"parameterized ctor called"<<endl;
}
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
  Student s2(7,19,"Atul",100,1,"no");

 
  cout<<s2.name<<endl;
  cout<<s2.id<<endl;
  cout<<s2.age<<endl;

    return 0;
}